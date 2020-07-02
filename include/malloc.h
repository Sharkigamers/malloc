/*
** EPITECH PROJECT, 2020
** malloc
** File description:
** malloc
*/

#ifndef MALLOC_H_
#define MALLOC_H_

#include <stddef.h>
#include <stdbool.h>

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <pthread.h>

void ft_putchar(char c);
void ft_putnbr(size_t nbr);

typedef struct block
{
    struct block *next;
    bool free;
    size_t size;
    void *data;
} block_t;

#define align2(x) (((((x) - 1) >> 2) << 2) + 4)

block_t *head_block;
static pthread_mutex_t pthread_mutex = PTHREAD_MUTEX_INITIALIZER;

#ifdef DEBUG

void *my_malloc(size_t size);
void my_free(void *ptr);
void *my_calloc(size_t nmemb, size_t size);
void *my_realloc(void *ptr, size_t size);
void *my_reallocarray(void *ptr, size_t nmemb, size_t size);

#else

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);

#endif

long int get_sbrk_size(size_t size);
void init_block(block_t **head_block, size_t size);
void *split_block(block_t *current, size_t size);

#endif /* !MALLOC_H_ */
