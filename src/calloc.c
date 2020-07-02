/*
** EPITECH PROJECT, 2020
** calloc
** File description:
** calloc
*/

#include <unistd.h>

#include <stddef.h>
#include <string.h>
#include "../include/malloc.h"

#ifdef DEBUG

void *my_calloc(size_t nmemb, size_t size)

#else

void *calloc(size_t nmemb, size_t size)

#endif
{
    #ifdef DEBUG
    size_t *res = my_malloc(size * nmemb);
    #else
    void *res = malloc(size * nmemb);
    #endif

    if (res == NULL)
        return NULL;
    for (size_t i = 0; i < size * nmemb; i++)
        ((char *)res)[i] = 0;
    return res;
}
