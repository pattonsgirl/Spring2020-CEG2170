#include <stdio.h>
#include <math.h>
#include <string.h>


int main (void){
    // initialize a string
    // ends in null terminator /0 - this can be overwritten, 
    //  that would cause problems (show initialization versus inserting with loop)
    char letters [40] = "This is my sentence I will try to do more than 40 characters to prove my point.";
    char foo [9] = {"Unicorn"};
    printf("%s\n", foo);
    /*for (int i = 0; i < 9; i++){
        //scanf("%c", foo[i]);
        foo[i] = getchar();
    }*/
    //fgets requires three parameters (array to store to, maximum size to read, where to read it from)
    //fgets(foo, 9, stdin);
    //gets is going to autofix.  It can adjust the size, size is no longer trustworthy
    //  You need to use strlen(foo) for loop iterations if you use gets to get user input
    //printf("%d", strlen(foo));
    //similar to fgets, this truncates input
    //scanf("%s", foo);
    //printf("\n\n--\n%s", foo);


    //an array of strings (2D) - how many strings, max size of strings
    char grocery_list[3][20] = {
        "bananas", //to get to n, use grocery_list[0][2]
        "milk", 
        "flour" };
    int num_grid [3][4] = {
            {1, 3, 4, 5}, //to get to num 4 in this array, use num_grid[0][2]
            {4, 5, 6, 7}, 
            {4, 5, 8, 9} };
    //int grocery_prices

    //search a string (1D)
    char silly_sentence [] = "A quick brown fox jumps";
    //char fill_in_blank [] = "0000000000000000000000000000";
    int size = strlen(silly_sentence);
    char find_me = 'u';
    for (int i = 0; i < size; i++){
        if(find_me == silly_sentence[i]){
            printf("I found char %c", find_me);
            //fill_in_blank[i] = silly_sentence[i];
        }
    }
    //printf("\n%s\n", fill_in_blank);

    
    //sort a string (1D)

    return 0;
}

// TODO examples
    //compare 2 strings (string.h library) - strcmp

    //search a list

    //sort a list




