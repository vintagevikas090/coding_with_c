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