#include<stdio.h>
#include<stdlib.h>


//program to convert given alphabet to corresponding upper/lowercase


char to_lower_case(char);
char to_upper_case(char);

int main(){
    char ch, result;
    printf("Enter an alphabet: \n");
    scanf("%c", &ch);
    result = to_lower_case(ch);
    printf("Alphabet corresponding to your given is %c", result);
    return 0;
}
    char to_upper_case(char ch){
        if(ch>='a'&&ch<='z'){
            ch-=32;
            return ch;
        
    }
    }
    char to_lower_case(char ch){
        if(ch>='A'&&ch<='Z'){
            ch+=32;
            return ch;
        }
        else
            return to_upper_case(ch);
    }







// char convertcharacter(char);

// int main(){
//     char ch, ch1;

//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     printf("Corresponding uc/lc alphabet is %c", convertcharacter(ch));

//     return 0;
// }

// char convertcharacter(char ch){
//     int n = (int)(ch);
//     char ch1;
//     if(n>=65 && n<=91){
//         n+=32;
//         return (char)(n);
//     }
//     else if(n>=97 && n<= 123){
//         n-=32;
//         return (char)(n);
//     }
//     else{
//         printf("Given character is Not an alphabet.");
//         return (char)(32);
//     }
//     }

// char charactercovert(char);

// int main(){

//     char ch, result;
//     printf("Enter a character: \n");
//     scanf("%c", &ch);

//     result = charactercovert(ch);
//     printf("%c", result); 

//     return 0;
// }

// char charactercovert(char ch){
//     if(ch>='a'&&ch<='z'){
//         ch-=32;
//         printf("Corresponding uppercase is: %c\n", ch);
//     }
//     else if(ch>='A'&&ch<='Z'){
//         ch+=32;
//         printf("Correspondig lower case is: %c\n", ch);
//     }
//     else
//         printf("Given character is not an alphabet.\n");

//     return ch;
//    }

