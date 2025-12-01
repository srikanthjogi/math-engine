#include "algebra.h"

void matrix_add(int r, int c, int A[r][c], int B[r][c], int R[r][c]) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            R[i][j] = A[i][j] + B[i][j];
}

