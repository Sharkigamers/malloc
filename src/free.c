/*
** EPITECH PROJECT, 2020
** free
** File description:
** free
*/

#include "../include/malloc.h"

void ft_putnbr(size_t nbr);

#ifdef DEBUG

void my_free(void *ptr)

#else

void free(void *ptr)

#endif
{
    block_t *current = head_block;

    while (current) {
        if (current->data == ptr) {
            current->free = true;
            return;
        }
        current = current->next;
    }
}
