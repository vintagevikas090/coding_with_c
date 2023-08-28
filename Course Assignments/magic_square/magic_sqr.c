#include <stdio.h>
#include<stdlib.h>


int main(){
    int n;
    printf("Enter size of Magic Square(odd num between 1 to 15): ");
    scanf("%d", &n);
    if (n < 1 || n > 15 || n % 2 == 0){
        printf("Invalid input\n");
        printf("Values should be odd integers between 1 and 15\n");
        return 0;
    }

    int magic[n][n];
    int p, q;
    for(p = 0; p < n; ++p){
        for(q = 0; q< n; ++q){
            magic[p][q] = 0;
        }
    }

    p = n - 1;
    q = n/2;
    int k;
    for(k = 1; k <= n * n; ++k){
        magic[p][q] = k;
        int oldp = p;
        int oldq = q;
       
        p = (p + 1 ) % n;
        q = (q + 1) % n; 
        if (magic[p][q] != 0){
            p = oldp;     
            q = oldq; 
			p--;          
        }
    } 

    int magicConstant = n * (n * n + 1) / 2;

    printf("The magic square: \n\n");
    int correct  = 1; 
    for(p = 0; p < n; ++p){
        int pSum = 0;
        for(q = 0; q < n; ++q){
            printf("%4d", magic[p][q]);
            pSum += magic[p][q];
        }
        printf("\n");
        if (pSum != magicConstant){
            correct = 0;
        }
    }

    for(q = 0; q < n; ++q){
        int qSum = 0;
        for(p = 0; p < n; ++p){
            qSum += magic[p][q];
        }
        if (qSum != magicConstant){
            correct = 0;
        }
    }

    int firstDiaSum = 0;
    for(p = 0, q = 0; p < n; ++p, ++q){
        firstDiaSum += magic[p][q];
    }
    if (firstDiaSum != magicConstant){
        correct = 0;
    }

    int secondDiaSum = 0;
    for(p = 0, q = n - 1; p < n; ++p, --q){
        secondDiaSum += magic[p][q];
    }
    if (secondDiaSum != magicConstant){
        correct = 0;
    }

    if (correct){
        printf("Magic square generated with dimension %d and magic constant: %d\n", n, magicConstant);
    }
    else{
        printf("Error in forming magic square with dimension %d\n", n);
    }
    return 0;
}
