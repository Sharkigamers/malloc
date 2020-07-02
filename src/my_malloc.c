/*
** EPITECH PROJECT, 2020
** my_malloc
** File description:
** my_malloc
*/

#include <string.h>
#include <unistd.h>
#include <pthread.h>

#include "../include/malloc.h"

void *mutex_off(void *return_value)
{
    pthread_mutex_unlock(&pthread_mutex);
    return return_value;
}

block_t *best_fit(size_t size)
{
    block_t *current = head_block;
    block_t *result = NULL;

    for (; current; current = current->next) {
        if (current->free && (size + sizeof(block_t)) <= current->size &&
        (!result || (result && current->size < result->size)))
            result = current;
    }
    if (result)
        result = split_block(result, size);
    return result;
}

block_t *extend_block(size_t size)
{
    block_t *current = head_block;

    for (; current->next; current = current->next);
    current->next = sbrk(get_sbrk_size(size + sizeof(block_t)));
    current = current->next;
    if (current == (void *)-1)
        return NULL;
    current->data = (void *)current + sizeof(block_t);
    current->size += get_sbrk_size(size + sizeof(block_t)) - sizeof(block_t);
    current->free = true;
    current->next = NULL;
    return current;
}

#ifdef DEBUG
void *my_malloc(size_t size)
{
#else
void *malloc(size_t size)
{
#endif
    block_t *new_block = NULL;
    size = align2(size);
    size_t check_size = 0;

    if (!size || __builtin_umull_overflow(size, 1, &check_size))
        return NULL;
    pthread_mutex_lock(&pthread_mutex);
    if (!head_block) {
        init_block(&head_block, size);
        if (!head_block)
            return mutex_off(NULL);
    }
    new_block = best_fit(size);
    if (!new_block) {
        new_block = extend_block(size);
        new_block = best_fit(size);
    }
    return mutex_off(new_block->data);
}
