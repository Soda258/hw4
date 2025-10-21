#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){

    int k = atoi(argv[1]);
    int arr[10];
    for(int i=1; i<=10;i++){
        arr[i] = atoi(argv[i+1]);
    }
    if(k>0){
        for(int i=1;i<=10;i++){
            if(i<k){
                printf("%d ", arr[10-abs(i-k)]);}
            else if(i==k){
                printf("%d ", arr[10]);}
            else{
                printf("%d ", arr[abs(i-k)]);}
        }
    }
    else if(k<0){
        for(int i=1;i<=10;i++){
            if(i-k>10){
                printf("%d ", arr[abs(10-i-k)]);}
            else if(i==k){
                printf("%d ", arr[10]);}
            else{
                printf("%d ", arr[abs(i-k)]);}
        }
    }

    return 0;
}