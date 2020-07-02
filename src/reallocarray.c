/*
** EPITECH PROJECT, 2020
** reallocarray
** File description:
** reallocarray
*/

#include <stddef.h>

#include "../include/malloc.h"

#ifdef DEBUG

void *my_reallocarray(void *ptr, size_t nmemb, size_t size)

#else

void *reallocarray(void *ptr, size_t nmemb, size_t size)

#endif
{
    size_t check_size = 0;

    if (__builtin_umull_overflow(size, nmemb, &check_size))
        return NULL;
    #ifdef DEBUG
    return my_realloc(ptr, nmemb * size);
    #else
    return realloc(ptr, nmemb * size);
    #endif
}