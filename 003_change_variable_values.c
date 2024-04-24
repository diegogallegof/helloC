#include <stdio.h>
// C Variable Values
// Change Variable Values

int main(){
    // If you assign a new value to an existing variable, it will overwrite the previous value:
    // Example ----------------------------------------------------------------
    int myNum0 = 15;  // myNum is 15
    myNum0 = 10;  // Now myNum is 10
    // You can also assign the value of one variable to another:
    // Example ----------------------------------------------------------------
    int myNum = 15;
    int myOtherNum = 23;
     // Assign the value of myOtherNum (23) to myNum
    myNum = myOtherNum;
    // myNum is now 23, instead of 15
    printf("%d\n", myNum);
    // Or copy values to empty variables:
    // Example ----------------------------------------------------------------
    // Create a variable and assign the value 15 to it
    int myNum1 = 15;
    // Declare a variable without assigning it a value
    int myOtherNum1;
    // Assign the value of myNum to myOtherNum
    myOtherNum1 = myNum1;
    // myOtherNum now has 15 as a value
    printf("%d\n", myOtherNum1);
    // Add Variables Together
    // To add a variable to another variable, you can use the + operator:
    // Example ----------------------------------------------------------------
    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d", sum);

    return 0;
}