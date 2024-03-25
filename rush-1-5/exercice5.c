/*
** EPITECH PROJECT, 2023
** oeoe
** File description:
** rush-1-1.c
*/
#include <stdio.h>

void ligne1(int x)
{
    if (x > 0){
        my_putchar('A');
    }
    x--;
    while (x > 1){
        my_putchar('B');
        x--;
    }
    if (x > 0){
        my_putchar('C');
        my_putchar('\n');
    }
}

void ligne3(int x)
{
    if (x > 0){
        my_putchar('C');
    }
    x--;
    while (x > 1){
        my_putchar('B');
        x--;
    }
    if (x > 0){
        my_putchar('A');
        my_putchar('\n');
    }
}

void ligne2(int x)
{
    if (x > 0){
        my_putchar('B');
    }
    x--;
    while (x > 1){
        my_putchar(' ');
        x--;
    }
    if (x > 0){
        my_putchar('B');
        my_putchar('\n');
    }
}

void rush2(int x, int y)
{
    if ((x <= 0) || (y <= 0)){
    write(2, "Invalid size\n", 14);
    }
    if ((x == 1) && (y == 1)){
        my_putchar('B');
    }
    if ((y == 1) && (x > 1)){
        ligne_etoile(x);
    }
}

void rush(int x, int y)
{
    rush2(x, y);
    if ((x == 1) && (y > 1)){
        colone_etoile(y);
    }
    if ((y > 1) && (x > 1)){
        ligne1(x);
    }
    y--;
    while ((y > 1) && (x > 1)){
        if ((y > 1)){
        ligne2(x);
        }
        y--;
        if ((y == 1)){
            ligne3(x);
        }
    }
}
