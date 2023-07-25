#include<stdio.h>
#include<stdlib.h>

// 1 2 3 4 5 6 7 8
// after displacing by two digits
// 3 4 5 6 7 8 1 2

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
    int displace_no;
    printf("Enter the size of array: ");
    scanf("%d", &m);
    p = (int*)calloc(m, sizeof(int));
    printf("Enter array elements: \n");
    scan_array(p, m);
    printf("Enter the number by which you want to displace the array element: \n");
    scanf("%d", &displace_no);
    int x[m], k;
    for(int i = 0; i<m; i++){
        if((i+displace_no)<m){
            x[i]=p[i+displace_no];
        }
        else{
            x[i]=p[k];
            k++;
        }
    }
    print_array(x, m);
    
    return 0;
}