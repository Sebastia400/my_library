/*
** EPITECH PROJECT, 2021
** B-PSU-200-BAR-2-1-mysokoban-sebastia.gomez-dolc
** File description:
** main.c
*/

#include "./../includes/my_library.h"

int is_number(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int is_char_in_str(int n, char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == n)
            return (1);
        i++;
    }
    return (0);
}

int is_char_num(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
