#include<stdio.h>
#include<stdlib.h>

//copy one array to other and print it

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

    int m;
    printf("Enter the size of array: ");
    scanf("%d", &m);
    int p[m];
    printf("Enter array elements: \n");
    scan_array(p, m);
    int x[m];
    for(int i=0; i<m; i++){
        x[i]=p[i];
    }
    print_array(x, m);

    return 0;
}