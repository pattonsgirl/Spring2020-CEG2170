#include <stdio.h>  //standard input and ouput
#include <stdlib.h>  //needed to flush buffer
#define PI 3.14159

//prototype parameters
int adder(int, int);
//if I did not put in a protoype, I would get a warning that C is going
//  to try to make it up on my behalf

int main (void) {
    printf("%d", adder(PI,5));

    return 0;
}

/*
* Function: adder - adds two numbers together
* Expects two integers
* Returns one integer
*/
int adder(int num1, int num2){
    printf("I'm in this function!\n");
    return num1+num2;
}
