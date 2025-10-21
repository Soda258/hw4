#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    double matrixA[10][3];
    double matrixB[3][10];
    double result[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrixA[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%lf", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%lf", result[i][j]);
            if (i != 10 - 1 || j != 10 - 1) {
                printf(" ");
            }
        }
    }

    return 0;
}