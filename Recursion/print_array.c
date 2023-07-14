#include<stdio.h>
#include<stdlib.h>

// Write a program in C to print the array elements using recursion.

void input_array(int a[], int b){
    for(int i = 0; i<b; i++){
        scanf("%d", &a[i]);
    }
}

void print_array(int arr[], int i, int size){
    if(i>=size){
        return;
    }
    else if(i < size){
        printf("%d ", arr[i]);
        print_array(arr, i+1, size);
    }
}

int main()

{
    int n;
    printf("Enter the total number of elements: \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the array elements: \n");
    input_array(array, n);
    printf("Given array is as following: \n");
    print_array(array, 0, n);


    
    return 0;
}