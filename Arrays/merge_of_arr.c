#include<stdio.h>
#include<stdlib.h>

//program to merge two arrays and print it

int main()
{
    int x[8];
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};
    for(int i=0; i<8; i++){
        if(i<3){
            x[i]= arr1[i];
        }
        else{
            x[i]= arr2[i-3];
        }
    }
    for(int j=0; j<8; j++){
        printf("%d ", x[j]);
    }
    
    return 0;
}