/*
** EPITECH PROJECT, 2020
** realloc
** File description:
** realloc
*/

#include <string.h>
#include <stddef.h>

#include "../include/malloc.h"

static void conditional_free(void *ptr)
{
    #ifdef DEBUG
    return my_free(ptr);
    #else
    return free(ptr);
    #endif
}

static block_t *conditional_malloc(size_t size)
{
    #ifdef DEBUG
    return my_malloc(size);
    #else
    return malloc(size);
    #endif
}

static block_t *moove_mem(block_t *result, block_t *found_ptr,
void *ptr, size_t size)
{
    result = conditional_malloc(size);
    if (!result)
        return NULL;
    if (size < found_ptr->size)
        memmove(result, ptr, size);
    else
        memmove(result, ptr, found_ptr->size);
    return result;
}

#ifdef DEBUG

void *my_realloc(void *ptr, size_t size)

#else

void *realloc(void *ptr, size_t size)

#endif
{
    block_t *result = NULL;
    block_t *found_ptr = NULL;

    if (!ptr || !head_block)
        return conditional_malloc(size);
    found_ptr = ptr - sizeof(block_t);
    if (found_ptr) {
        result = moove_mem(result, found_ptr, ptr, size);
        if (!result)
            return NULL;
    }
    else
        conditional_malloc(size);
    conditional_free(ptr);
    return result;
}