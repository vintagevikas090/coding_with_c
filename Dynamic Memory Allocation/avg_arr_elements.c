#include<stdio.h>
#include<stdlib.h>

/*WAP to calculate the average of elements in array(using dynamic allocation)*/

int size_of_array;

float average(int arr[], int n){
    int sum = 0;
    for(int j= 0; j<n; j++){
        sum+=arr[j];
    }
    return (float)sum/n;
}

int main()
{
    int *ptr;
    float avg;
    extern int size_of_array;
    printf("For how many numbers you want to calculate the average: ");
    scanf("%d", &size_of_array);
    ptr = (int*)calloc(size_of_array, sizeof(int));

    if(ptr == NULL){
        printf("Memory not allocated.\n");
    }
    else{
        printf("Memory has been allocated.\n");
        printf("Enter the numbers whose average you want: ");
        for(int i =0; i<size_of_array; i++){
            scanf("%d", &ptr[i]);
        }
    }
    avg = average(ptr, size_of_array);
    printf("Average of the given numbers is %.2f", avg);

    return 0;
}