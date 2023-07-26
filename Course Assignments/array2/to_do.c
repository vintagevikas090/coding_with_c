// // <!-- Created by Shibaji Paul for Udemy “C Programming” course.

// // For this assignment we will represent a positive integer of maximum 10 digits 
// in an one dimensional array. For example the number 56036 can be represented in array digitwise..


// // You are going to write a program that will ask user to input a number in the following manner:
// // • Declare an integer array with 10 elements, initialize each element with 0.
// // • First prompt the user that they can input at most 10 digits number.
// // • Ask the user to input total number of digits in the number that they want to input, keep this in a variable n. 
// If n is greater than 10 provide an error message and terminate the program.

// // • For valid n, run a loop to input each digit of the number one at a time, 
// for the number 56036 user will input 5 as the first digit, that you will need to keep at index 5 of the array, you need to do calculation for this start index. For example again, if the input number is of 4 digits then you need to start from index 6. Read one digit at a time and place that digit at appropriate index room of the integer one dimensional array that you already have declared with SIZE 10 in your main method.

// // • Once the input is complete print the number back to the console.
// // Now, once the input number is taken into the array, your program will ask 
// the user to input a digit between 1 and 9 (both inclusive), 
// if invalid input is there terminate the program giving error message. 
// You will keep this in another integer variable d, 
// not you need to add that digit with the number in the array.
//  You need to start from index 9 and keep carry as necessary. 
//  Look into the following example: If we have 56036 in the array 
//  and user wants to add 7 with this, then first you would require to add 7 with digit 6 that yields 13
//  , now replace index 9 with 3 and carry 1 to room with index 8 and add that carry with 3 there and
//   that will become 4 and then the carry will be 0 and you stop iterating in the loop. -->
