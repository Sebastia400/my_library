/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-printf
** File description:
** bsprintf.h
*/

#ifndef BSPRINTF_H_
    #define BSPRINTF_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <stddef.h>
    #include <fcntl.h>
    #include <math.h>
    #include <dirent.h>

char **delete_first_line(char **array);
void print_array_strings(char **array);
char **save_matrix(char **matrix);
int check_size_ext(char **matrix, int i, int j, int n);
int check_size(char **matrix, int width, int height);

int my_matcmp(char **matrix_1, char **matrix_2);
int my_strcmp(char *s1, char *s2);

int my_atoi(char *str);
char *ext_my_itoa(int nb, char *str, int neg);
char *my_itoa(int nb);

int is_number(char *str);
int my_ischar(char c);
int is_char_in_str(int n, char *str);
int is_char_num(char c);

int my_strlen(char *str);
int my_nbrlen(int nb);
int my_arraylen(char **matrix);

void *my_memset(void *s, int c, int n);
void *my_calloc(int nmemb, int size);

int size_text(char *filepath);
char *save_text(char *filepath);
int quantity_sentences(int size_text, char *str, char delimiter);
int len_sentence(char *arraytext, char delimiter);
char **str_to_array(char *arraytext, char separator);

char *my_strcat(char *dest, char *src);
char *my_strdup(char *str);
char *my_revstr(char *str);
int string_contain(char *str, char *to_find);
char *my_charcat(char *dest, char src);

#endif
