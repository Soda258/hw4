#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){

    float sum = 0;
    for(int i=1; i<=10;i++){
        sum = sum + atof(argv[i]);
    }
    printf("%.2f", sum/10);

    return 0;
}