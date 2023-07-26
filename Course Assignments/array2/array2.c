#include<stdio.h>
#include<stdlib.h>
 
 
int main()
{
    int arr[10] = {0};
    printf("You can only input maximum 10 numbers..\n");
    int n,p;
    printf("Enter the total number of digits in number you want to enter.\n");
    scanf("%d", &n);
    if(n>10){
        printf("Error! ");
        return 0;
    }
    printf("Enter the number.(digitwise)\n");
    for(int i=0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Given number is as follows..\n");
    for(int i=0 ; i<n; i++){
        printf("%d",arr[i]);
    }
 
    printf("\nEnter a digit (1 to 9): \n");
    scanf("%d", &p);
    if((p<=0 && p>9)){
        printf("Error! Input number between 1 to 9.\n");
    }
    else{
        int x = arr[n-1]+p;
        if(x>9){
            arr[n-1]=x-10;
            arr[n-2]=arr[n-2]+1;
        }
        else
            arr[n]=x;
    }
 
    printf("New number after adding %d..\n", p);
    for(int i=0 ; i<n; i++){
        printf("%d",arr[i]);
    }
 
    return 0;
}