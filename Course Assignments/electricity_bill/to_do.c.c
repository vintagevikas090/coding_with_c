// // In this assignment you will write a program to generate electricity bill, 
// when the program executes it will ask for the consumed unit (int) to input, 
// once that is given by the user (who executes this program), 
// then it will print the bill according to the following rule:

// // Unit Consumed      Rate ($ per unit)

// // <=100                     .2     

// // >100 and <=250     .5

// // >250 and  <=500    0.75

// // >500                        1.0

// // Please note that the rates are applied on slabs, 
// that means for unit consumed of 300, first 100 units will be charges @$0.2, 
// then next 150 units @$0.5, and rest of 50 units @0.75 






#include <stdio.h>

int main(){
	int units;    // you need to input this	
	double bill_amount;  // you need to calculate this

	// prompt user to input unit consumed using printf and then
	// using scanf read the value into the unit variable.


	// Now, use if-elseif to decide about rate
	if (units < 0){
		printf("Unit consumed cannot be negative\n");
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2;     // for this range 0.2 is the rate
	}
	else if(){  // >100 and <=250
		// please note that the bill must be calculated on slabs (see instructions)	
	}
	else if(){  // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)
	}
	else{		// for anything >500
		// please note that the bill must be calculated on slabs (see instructions)
	}
	
	// ** finally print the bill amount here, please note that if the unit consumed is 
	// invalid that is negative then no bill should be printed. **

	return 0;
}