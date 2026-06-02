/*
** EPITECH PROJECT, 2026
** operation.h
** File description:
** Header file for managing operations
*/

#ifndef OPERATION_H_
    #define OPERATION_H_

    #include <stdbool.h>

typedef struct {
    bool ok;
    union {
        double res;
        char *err_msg;
    } data;
} op_result_t;

typedef enum {
    OP_ADDITION,
    OP_SUBSTRACTION,
    OP_MULTIPLICATION,
    OP_DIVISION,
    OP_NONE
} op_type_t;

typedef op_result_t (*op_fn_t)(double left, double right);

typedef struct {
    op_type_t op;
    char op_char;
    op_fn_t fn;
} op_t;

extern const op_t G_OPS[];

op_result_t addition(double left, double right);
op_result_t substraction(double left, double right);
op_result_t multiplication(double left, double right);
op_result_t division(double left, double right);

#endif // !OPERATION_H_
