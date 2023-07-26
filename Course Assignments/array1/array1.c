#include <stdio.h>
#include <math.h>

int main(){
    float x[20],y[20];
    int n=0;
    printf("Enter the inputs:\n");
    for(int i=0;i<20;i++){
        scanf("%f",&x[i]);
        if(x[i]==0){
            break;
        
        }n++;

    }
    float sum_first=0;
    float sum_second=0;
    printf("There are total %d given as input\n",n);
    printf("%12s   %13s\n\n","Input Array","Second array");
    for(int i=0;i<n;i++){
        if(i%2==0){
            y[i]=2*x[i];
        }else
        y[i]=cbrt(x[i]);
         printf("%10f %14f\n\n",x[i],y[i]);
    }for(int i=0;i<n;i++){
        sum_first=sum_first+x[i];
        sum_second=sum_second+y[i];
    }
    printf("SUM OF THE FIRST ARRAY:%f\n",sum_first);
    printf("SUM OF SECOND ARRAY:%f",sum_second);
    return 0;
   
}