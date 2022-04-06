/*
** EPITECH PROJECT, 2021
** B-PSU-200-BAR-2-1-mysokoban-sebastia.gomez-dolc
** File description:
** main.c
*/

#include "./../includes/my_library.h"

char *my_strcat(char *dest, char *src)
{
    char *temp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)) + 2);
    int i = 0;
    int n = 0;

    my_memset(temp, '\0', (my_strlen(dest) + my_strlen(src)) + 2);
    while (dest[i] != '\0') {
        temp[i] = dest[i];
        i++;
    }
    while (src[n] != '\0') {
        temp[i] = src[n];
        i++;
        n++;
    }
    temp[i] = '\0';
    return (temp);
}

char *my_strdup(char *str)
{
    char *result = calloc(my_strlen(str) + 1, sizeof(char));
    int i = 0;

    while (str[i] != '\0') {
        result[i] = str[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}

char *my_revstr(char *str)
{
    char *dup = malloc(sizeof(char) * my_strlen(str) + 2);
    int j = my_strlen(str) - 1;
    int i = 0;

    my_memset(dup, '\0', my_strlen(str) + 2);
    while (str[i] != '\0') {
        dup[i] = str[j];
        i++;
        j--;
    }
    dup[i] = '\0';
    return (dup);
}

int string_contain(char *str, char *to_find)
{
    int i = 0;

    for (int j = 0; str[j]; j++) {
        if (str[j] == to_find[i])
            i++;
        else
            i = 0;
        if (i == my_strlen(to_find))
            return (1);
    }
    return (0);
}