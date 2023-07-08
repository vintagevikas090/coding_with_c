#include<stdio.h>
#include<stdlib.h>

//about 8 cell colony

// Given a binary array of size n where n > 3.
//  A true (or 1) value in the array means active and false (or 0) means inactive. 
//  Given a number k, the task is to find count of active and inactive cells after k days. 
//  After every day, status of i’th cell becomes active if left and right cells are not same 
//  and inactive if left and right cell are same (both 0 or both 1). 

// Since there are no cells before leftmost and after rightmost cells, 
// the value cells before leftmost and after rightmost cells is always considered as 0 (or inactive).

void print_array(int arr[], int n){
    printf("\n[");
    int i;
    for (i = 0; i<n; i++){
        if (i!=n-1)
            printf("%d |", arr[i]);
        else
            printf("%d ]", arr[i]);
    }
}

void cell_colony(int arr[8], int days){
    int d = 1; 
    int temp[8];
    int left, right;
    while (d<= days)
    {
        for(int i = 0; i<8; i++){
            left = (i==0)?0:arr[i-1];
            right = (i==7)?0:arr[i+1];
            if(left == right)
                temp[i] = 0;
            else
                temp[i] = 1; 
        }
        for(int i= 0; i<8; i++){
            arr[i] = temp[i];
        }
        printf("\n\nSituation after day: %d", d);
        print_array(arr, 8);
        d++;
    }

}

int main()
{
    int arr[8] = {1, 0, 0, 1, 1, 1, 0, 1};
    cell_colony(arr, 4);

    return 0;
}