/*
** EPITECH PROJECT, 2023
** B-CPE-100-TLS-1-1-rush1-dorian.melenotte
** File description:
** rush-1-3b.c
*/

void ligne_etoile(int x)
{
    while (x != 0){
        my_putchar('B');
        x--;
    }
}

void colone_etoile(int y)
{
    while (y != 0){
        my_putchar('B');
        my_putchar('\n');
        y--;
    }
}
