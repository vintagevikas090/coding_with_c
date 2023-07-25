/*

M = SIZE OF ARRAY1
N = SIZE OF ARRAY2
P = ARR1(pointer actually)
Q = ARR2(pointer actually)

----->FUNCTION TO PRINT ARRAY 


 void print_array(int arr[], int n){
    for(int i = 0; i<n; i++){
         printf("%d, ", arr[i]);
    }
}  



*/


// #include<stdio.h>
// #include<stdlib.h>

// int m;
// void scan_array(int arr[], int n){
//      for(int i = 0; i<n; i++){
//          scanf("%d", &arr[i]);
//     }
// }
// int main(){

//     extern int m;
//     int *p;
//     printf("Enter the size of array: ");
//     scanf("%d", &m);
//     p = (int*)calloc(m, sizeof(int));
//     printf("Enter array elements: \n");
//     scan_array(p, m);
    

//     return 0;
// }


//------>>>>TAKING INPUT IN TWO ARRAYS(WITHOUT ASSIGNED SIZE)



#include<stdio.h>
#include<stdlib.h>

void scan_array(int arr[], int n){
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}
int m, n;
int main()
{
    extern int m, n;
    int *p, *q;
    printf("Enter the size of each array: ");
    scanf("%d %d", &m, &n);
    p = (int*)calloc(m, sizeof(int));
    q = (int*)calloc(n, sizeof(int));
    printf("Enter 1st array elements: \n");
    scan_array(p, m);
    printf("Enter 2nd array elements: \n");
    scan_array(q, n);
    
    return 0;
}