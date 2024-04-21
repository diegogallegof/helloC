// C Format Specifiers
// Format Specifiers
// Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.

// A format specifier starts with a percentage sign %, followed by a character.

// For example, to output the value of an int variable, use the format specifier %d surrounded by double quotes (""), inside the printf() function:

// Example
#include <stdio.h>

int main() {
 // Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
// To combine both text and a variable, separate them with a comma inside the printf() function:
// ----------------------------------------------------------------
// Example
// ----------------------------------------------------------------
printf("My favorite number is: %d\n", myNum);
//To print different types in a single printf() function, you can use the following:

// ----------------------------------------------------------------
// Example
// ----------------------------------------------------------------
printf("My number is %d and my letter is %c", myNum, myLetter);
  return 0;
}
 