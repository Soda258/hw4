#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    double array[10];
    double finalArray[10];

    int x = atoi(argv[1]);
    int k = atoi(argv[2]);

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i < k) {
            finalArray[i] = array[i];
        }
        else if (i == k) {
            finalArray[i] = x;
        }
        else {
            finalArray[i] = array[i - 1];
        }
    }

    for (int i = 0; i < 10; i++) {
        if (i == 10 - 1) {
            printf("%lf", finalArray[i]);
        }
        else {
            printf("%lf ", finalArray[i]);
        }
    }

    return 0;
}