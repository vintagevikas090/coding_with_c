
#include<stdio.h>
#include<stdlib.h>

int m;

void scan_array(int arr[], int n){
     for(int i = 0; i<n; i++){
         scanf("%d", &arr[i]);
    }
}

void print_array(int arr[], int n){
    for(int i = 0; i<n; i++){
         printf("%d, ", arr[i]);
    }
} 

int main(){

    extern int m;
    int *p;
    printf("Enter the size of array: ");
    scanf("%d", &m);
    p = (int*)calloc(m, sizeof(int));
    printf("Enter array elements: \n");
    scan_array(p, m);
    int x[m];
    for(int i=0; i<m; i++){
        x[i]=p[i];
    }
    print_array(x, m);

    return 0;
}