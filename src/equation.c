/*
** EPITECH PROJECT, 2026
** equation.c
** File description:
** Source file for equation_t managing
*/

#include <stddef.h>
#include <stdlib.h>

#include "equation.h"
#include "operation.h"

equation_t *build_equation(int argc, char **argv)
{
    equation_t *equation = NULL;

    if (argc == 0 || argv == NULL)
        return NULL;
    equation = malloc(sizeof(equation_t));
    if (equation == NULL)
        return NULL;
    equation->op = OP_NONE;
    equation->data_type_left = TYPE_NONE;
    equation->data_type_right = TYPE_NONE;
    return equation;
}

void destroy_equation(equation_t *equation)
{
    if (equation == NULL)
        return;
    equation->op = OP_NONE;
    if (equation->data_type_left == TYPE_EQUATION) {
        destroy_equation(equation->left.eq);
    }
    if (equation->data_type_right == TYPE_EQUATION)
        destroy_equation(equation->right.eq);
    equation->data_type_left = TYPE_NONE;
    equation->data_type_right = TYPE_NONE;
    free(equation);
}
