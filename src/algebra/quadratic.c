#include <math.h>
#include "algebra.h"

double solve_quadratic(double a, double b, double c) {
    double disc = b*b - 4*a*c;
    if (disc < 0) return -9999;
    return (-b + sqrt(disc)) / (2*a);
}

