#include <stdio.h>
#include "arithmetic.h"
#include "algebra.h"
#include "input.h"
#include "logger.h"

int main() {
    log_msg("Math Project Started");

    int a = get_integer("Enter A: ");
    int b = get_integer("Enter B: ");

    printf("Add: %d\n", add(a, b));
    printf("Sub: %d\n", sub(a, b));
    printf("Mul: %d\n", mul(a, b));
    printf("Div: %.2f\n", divide(a, b));

    log_msg("Quadratic Example: solving x^2 + 5x + 6 = 0");
    printf("Root = %.2lf\n", solve_quadratic(1, 5, 6));

    return 0;
}

