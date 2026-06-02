/*
** EPITECH PROJECT, 2026
** main.c
** File description:
** Main entry file for calculator project
*/

#include <stdlib.h>

#include "equation.h"
#include "parse.h"

int main(int argc, char **argv)
{
    equation_t *equation = build_equation(argc, argv);

    if (!parse_args(argc, argv, equation))
        return EXIT_FAILURE;
    destroy_equation(equation);
    return EXIT_SUCCESS;
}
