#include <stdio.h>
#include <math.h>

int main(){
	int quit = 0;
	int n;  // n is the number for which you will find factorial
	int factorial = 1;  // you are going to keep the factorial of n in p
	double base, exp, value; // for a^b
	int choice; // for keeping the menu option

	while(!quit){
		// print the menu here
		printf("---MENU---\n");
		printf("1. Find Factorial\n");
		printf("2. a^b\n");
		printf("3. Quit\n");

		// get the response into option variable.
		printf("What you want to do(choice in number): ");
    	scanf("%d", &choice);

		if(choice==1){
			printf("Enter the number for which you want factorial.\n");
			scanf("%d", &n);
			for(int i= 1; i<=n; i++){
				factorial*=i;
			}
			printf("Factorial for %d is %d\n\n", n, factorial);
		}
		else if(choice==2){
			printf("Enter the base and power respectively: ");
			scanf("%lf %lf", &base, &exp);
			value = pow(base, exp);
			printf("The %.1lfth power of %.1lf is %.1lf\n\n", exp, base, value);
		}
		else 
			break;	
	}


}