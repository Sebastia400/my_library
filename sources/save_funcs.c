/*
** EPITECH PROJECT, 2021
** B-PSU-200-BAR-2-1-mysokoban-sebastia.gomez-dolc
** File description:
** main.c
*/

#include "./../includes/my_library.h"

int size_text(char *filepath)
{
    struct stat buf;
    stat(filepath, &buf);
    return (buf.st_size);
}

char *save_text(char *filepath)
{
    int fd = open(filepath, O_RDONLY);
    long size = size_text(filepath);
    char *arraytext = NULL;

    if (fd == -1)
        return (NULL);
    arraytext = malloc(sizeof(char) * size + 1);
    my_memset(arraytext, '\0', size + 1);
    read(fd, arraytext, size);
    close(fd);
    return (arraytext);
}

int quantity_sentences(int size_text, char *str, char delimiter)
{
    int i = 1;
    int num_sentences = 1;

    while (i < size_text) {
        if (str[i] == delimiter || str[i] == '\0')
            num_sentences++;
        i++;
    } return (num_sentences);
}

int len_sentence(char *arraytext, char delimiter)
{
    int i = 0;
    while (arraytext[i] != '\0' && arraytext[i] != delimiter)
        i++;
    return (i);
}

char **str_to_array(char *arraytext, char separator)
{
    int len = 0;
    int i = 0;
    int k = 0;
    int j = 0;
    char **sentences;

    sentences = my_calloc(quantity_sentences(my_strlen(arraytext),
    arraytext, separator) * 2, sizeof(char *));
    while (i < my_strlen(arraytext)) {
        len = len_sentence(arraytext, separator);
        sentences[j] = my_calloc(len * 2 + 10, sizeof(char));
        k = 0;
        while (arraytext[i] != separator && arraytext[i] != '\0' &&
        arraytext[i] != '\n')
            sentences[j][k++] = arraytext[i++];
        j++;
        i++;
    }
    sentences[j] = NULL;
    return (sentences);
}
