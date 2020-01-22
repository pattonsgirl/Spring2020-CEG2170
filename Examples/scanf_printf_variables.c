#include <stdio.h>  //standard input and output
#define MAX = 89

/*
* This program will print "Hello World" to console
*
* To run:
* Use shortcut Ctrl + Shift + C to bring up a cmd terminal
* If you are using mingw 32 bit, use command: mingw32-make run
* If you are using mingw 64 bit (or have changed mingw32-make to make) 
*    use command: make run
* See Makefile for what is happening in background
*/

int main (void) {
    //integers only do whole numbers
    int i = 9;
    //double accept decimals
    double j = 45.99;
    //others exist, such as float (instead of doubles)
    //  and short (instead of int)
    //characters (without an array) only accept one character
    char letter = "y";
    //this creates a space in memory for an array of characters.
    char str [80];

    //three things you can use to save variable in scanf
    //  %d - expects an integer
    //  %f - expects a double or float
    //  %c - expects a character
    //  & - at the address of the variable, save the value given
    //      only use & for a normal variable, not an array

    //this would work, but you haven't saved the second parameter with &
    //scanf("%d %c", &i);
    //this would save the second parameter
    scanf("%d %c", &i, &letter);

    //for printing, use the same expectations list as scanf
    //  but now you just call the variable, no &
    printf("You gave me the integer %d\n", i);
    printf("You gave me the character %c", letter);
    printf("You gave me %d and %c", i, letter);
    printf("Hello World");

    //this tells your program it's over
    return 0;
    //this won't run, already returned.
    printf("Hello World");
}