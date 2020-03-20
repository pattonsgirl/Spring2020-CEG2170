#include <stdio.h>
#include <math.h>

#define MAXCOL 5

//pass array and size of the array
void print_array(const int [], int);
void print_2D_array (const int [][MAXCOL], int, int);

int main (void){
    double num [9] = {6.7};
    char name [5] = {"Kayleigh "};

    printf("%s", name);

    int size = sizeof(name) / sizeof(name[0]);
    for (int i = 0; i < size; i++){
        printf("%c\n", name[i]);
    }

    return 0;
}

void print_2D_array (const int a[][MAXCOL], int x, int y){
     for (int row = 0; row < x; row++){
        for (int col = 0; col < y; col++){
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
    return;
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



