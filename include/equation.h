/*
** EPITECH PROJECT, 2026
** equation.h
** File description:
** Header file for managing equations
*/

#ifndef EQUATION_H_
    #define EQUATION_H_

    #include "operation.h"

typedef enum { TYPE_DOUBLE, TYPE_EQUATION, TYPE_NONE } data_type_t;

typedef struct equation_s {
    data_type_t data_type_left;
    union {
        double value;
        struct equation_s *eq;
    } left;
    data_type_t data_type_right;
    union {
        double value;
        struct equation_s *eq;
    } right;
    op_type_t op;
} equation_t;

equation_t *build_equation(int argc, char **argv);
void destroy_equation(equation_t *equation);

#endif // !EQUATION_H_
