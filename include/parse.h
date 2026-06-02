/*
** EPITECH PROJECT, 2026
** parse.h
** File description:
** Header file for arguments parsing and equation structure filling
*/

#ifndef PARSE_H_
    #define PARSE_H_

    #include <stdbool.h>

    #include "equation.h"

bool parse_args(int argc, char **argv, equation_t *equation);

#endif // !PARSE_H_
