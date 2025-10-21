#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){

    int arr[10];
    for(int i=1; i<=10;i++){
        arr[i] = atoi(argv[i]);
    }
    for(int i = 10; i > 0;i--){
        printf("%d ", arr[i]);
    }

    return 0;
}