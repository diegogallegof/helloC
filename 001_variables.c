
#include <stdio.h>
/*
C Variables
Variables are containers for storing data values, like numbers and characters.

In C, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
float - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes
Declaring (Creating) Variables
To create a variable, specify the type and assign it a value:

Syntax
type variableName = value;
Where type is one of C types (such as int), and variableName is the name of the variable (such as x or myName). The equal sign is used to assign a value to the variable.

So, to create a variable that should store a number, look at the following example:
*/
// ----------------------------------------------------------------
// Example
// ----------------------------------------------------------------
//Create a variable called myNum of type int and assign the value 15 to it:



// Output Variables
// You learned from the output chapter that you can output values/print text with the printf() function:
// ----------------------------------------------------------------
// Example
// ----------------------------------------------------------------“


int main() {
    int myNum = 15;
    printf("Hello World!\n");
// You can also declare a variable without assigning the value, and assign the value later:
// ----------------------------------------------------------------
// Example
// ----------------------------------------------------------------
// Declare a variable
    int myNum;
// Assign a value to the variable
    myNum = 15;
// In many other programming languages (like Python, Java, and C++), you would normally use a print function to display the value of a variable. However, this is not possible in C:
// Example
    printf(myNum);  // Nothing happens
    //To output variables in C, you must get familiar with 
    //something called "format specifiers", which you will learn about in the next chapter.
    return 0;
}
