/*
** EPITECH PROJECT, 2020
** block
** File description:
** block
*/

#include <unistd.h>
#include <stdio.h>

#include "../include/malloc.h"

long int get_sbrk_size(size_t size)
{
    return (size - 1) / (2 * getpagesize()) * (2 * getpagesize()) +
    (2 * getpagesize());
}

void init_block(block_t **head_block, size_t size)
{
    (*head_block) = sbrk(get_sbrk_size(size + sizeof(block_t)));
    if (*head_block == (void *)-1) {
        *head_block = NULL;
        return;
    }
    (*head_block)->data = (void *)(*head_block) + sizeof(block_t);
    (*head_block)->size = get_sbrk_size(size + sizeof(block_t))
    - sizeof(block_t);
    (*head_block)->free = true;
    (*head_block)->next = NULL;
}

void *split_block(block_t *current, size_t size)
{
    block_t *free_memory;

    free_memory = (void *)current->data + size;
    free_memory->size = current->size - size - sizeof(block_t);
    free_memory->data = (void *)free_memory + sizeof(block_t);
    free_memory->free = true;
    free_memory->next = current->next;
    current->size = size;
    current->free = false;
    current->next = free_memory;
    return current;
}
