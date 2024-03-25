/*
** EPITECH PROJECT, 2023
** rush1
** File description:
** annex
*/

void ligne_etoile(int x)
{
    my_putchar('o');
    x--;
    while (x != 1){
        my_putchar('-');
        x--;
    }
    my_putchar('o');
}

void colone_etoile(int y)
{
    my_putchar('o');
    my_putchar('\n');
    y--;
    while (y != 1){
        my_putchar('|');
        my_putchar('\n');
        y--;
    }
    my_putchar('o');
    my_putchar('\n');
}
