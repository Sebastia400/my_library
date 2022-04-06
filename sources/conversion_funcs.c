/*
** EPITECH PROJECT, 2021
** B-PSU-200-BAR-2-1-mysokoban-sebastia.gomez-dolc
** File description:
** main.c
*/

#include "./../includes/my_library.h"

int my_atoi(char *str)
{
    int i = 0;
    int nb = 0;
    int neg = 1;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * neg);
}

char *ext_my_itoa(int nb, char *str, int neg)
{
    int i = 0;

    while (nb > 0) {
        str[i] = nb % 10 + 48;
        nb /= 10;
        i++;
    }
    if (neg == 1) {
        str[i] = '-';
        i++;

    }
    str[i] = '\0';
    return (str);
}

char *my_itoa(int nb)
{
    char *str = malloc(sizeof(char) * my_nbrlen(nb) + 1);
    int neg = 0;

    if (nb < 0) {
        neg = 1;
        nb = -nb;
    }
    if (nb == 0) {
        return ("0");
        free(str);
    }
    return (my_revstr(ext_my_itoa(nb, str, neg)));
}