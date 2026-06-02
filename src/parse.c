/*
** EPITECH PROJECT, 2026
** parse.c
** File description:
** Source file for parsing execution arguments and filling equation structure
*/

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

#include "parse.h"
#include "equation.h"

bool parse_args(int argc, char **argv, equation_t *equation)
{
    char *equation_str = NULL;

    if (argc != 2 || argv == NULL || argv[0] == NULL || equation == NULL)
        return false;
    equation_str = strdup(argv[1]);
    if (equation_str == NULL)
        return false;
    free(equation_str);
    return true;
}
