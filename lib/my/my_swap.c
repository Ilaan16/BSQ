/*
** EPITECH PROJECT, 2018
** MY_SWAP
** File description:
** Swap two integers given as parameter (pointers)
*/

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
