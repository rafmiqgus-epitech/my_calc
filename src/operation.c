/*
** EPITECH PROJECT, 2026
** operation.c
** File description:
** Source file for managing operations
*/

#include <stddef.h>

#include "operation.h"

const op_t G_OPS[] = {
    {OP_ADDITION, '+', &addition},
    {OP_SUBSTRACTION, '-', &substraction},
    {OP_MULTIPLICATION, '*', &multiplication},
    {OP_DIVISION, '/', &division},
    {OP_NONE, '\0', NULL}
};

static op_result_t op_ok(double res)
{
    return (op_result_t){.ok = true, .data.res = res};
}

static op_result_t op_err(char *err_msg)
{
    return (op_result_t){ .ok = false, .data.err_msg = err_msg };
}

op_result_t addition(double left, double right)
{
    (void)left;
    (void)right;
    return op_ok(0);
}

op_result_t substraction(double left, double right)
{
    (void)left;
    (void)right;
    return op_ok(0);
}

op_result_t multiplication(double left, double right)
{
    (void)left;
    (void)right;
    return op_ok(0);
}

op_result_t division(double left, double right)
{
    (void)left;
    (void)right;
    return op_ok(0);
}
