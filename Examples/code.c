//#define and #include are preprocessor directives
#include <stdio.h>
#include <math.h>

int hello;
int main (void){
    int local;
    //printf goes to console, fprintf goes to file
    //scanf reads input from console, fscanf reads input from file

    //double and floats can be positive or negative, good for decimal values -56.89
    //ints can be postive or negative, but only for whole numbers
    //typecasting - where I can change verbosely
    int value = (int)78.9;
    //"%stuff" are placeholders for what type I'm going to print
    //  scans need them to to say what type to scan
    printf("%d", value);

    double dvalue = 78.345591;
    //print formatting
    // 18 slots to print my value, value is right justified.  
    //      .2 indicates how may decimal places
    printf("%18.2lf", dvalue);
    //tab then give a newline respectively
    int math = 10%4;
    printf("%d\t\n", math);

    //relational operators - used by if and while
    if(!(7 > 8) && !(6 < 7)){
        //nothing in here going to happen as long as 7 > 8
    }
    //if the first thing is not true, go here and see if this is true
    else if (7 < 8){

    }
    else {
        //this would happen
    }

    //difference between for and while
    //while loops keep running as long as conditional statement is true
    //for loops keep running based an iterator
    //  for loops need iterator, relational / conditional operator, count change
    for (int i = 9; i > 0; i--){
        //printf("%d\n", i);
    }
    int i = 9;
    //everything but 0
    while (i > 0){ // 9, 8, 7, 6, 5, 4, 3, 2, 1
        i--;
        //printf("%d\n", i); //8, 7, 6, 5, 4, 3, 2, 1, 0
        if(i == 5){
            continue;
        }
        //printf("Hi!\n");
        //if i-- goes here, output would be same as while loop iteration
    }

    //break vs continue
    // continues move on the next iteration
    // break breakout of the loop right then
    

    return 0;

}

