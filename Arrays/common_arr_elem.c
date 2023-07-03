#include<stdio.h>
#include<stdlib.h>

//program to print common elements in 2 arrays

void scan_array(int arr[], int n){
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int m, n;
    printf("Enter the size of Each array: ");
    scanf("%d %d", &m, &n);
    int p[m], q[n];
    printf("Enter the elements of the first array: \n");
    scan_array(p, m);
    printf("Enter the elements of the second array: \n");
    scan_array(q, n);
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         if(p[i]==q[j]){
    //             printf("%d is common in both arrays.\n");
    //         }
    //     }
    // }
    int x[100]={0};
    int k=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(p[i]==q[j]){
                x[k] = p[i];
                k++;
            }
        }
    }
    printf("Comman elemets are: \n");
    for(int a= 0; a<k; a++){
        printf("%d, ", x[a]);
    }

    return 0;
}