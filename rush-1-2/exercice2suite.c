/*
** EPITECH PROJECT, 2023
** projet 2
** File description:
** file annex
*/

void ligne_etoile(int x)
{
    while (x != 0){
        my_putchar('*');
        x--;
    }
}

void colone_etoile(int y)
{
    while (y != 0){
        my_putchar('*');
        my_putchar('\n');
        y--;
    }
}
