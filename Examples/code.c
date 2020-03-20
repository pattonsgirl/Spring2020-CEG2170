#include <stdio.h>
#include <math.h>

//pass array and size of the array
void print_array(const int [], int);
void sort_array(int [], int);

int main (void){
    //initialize a 2D array, method one:

    //method two:
    

    //how to pass an array to a function
    //  pass it the array name and the size of the array
    //print_array(num_list, size);

    return 0;
}

//this function prints an array - but only a 1D array - look at the brackets
//by putting const, I cannot make change to the values in the array in this function
//  consider it setting to read only mode
void print_array(const int a[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    return;
}



