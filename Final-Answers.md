1. Describe (with words) how to sort an array using selection sort (the only one we used in class).
    * Selection sort needs two loops - an outer loop, which will start at the 0th element and incremenet through i and an inner loop which will start at the 0th + 1 element and increment through j.  The starting positions ensure that an element is not compared to itself.  The max of i and j is the size of the array - 1.  For each iteration, the ith element is compared to the jth element for all values in the array - this means that by the end of the j loop, the i loop has the minimum or maximum value as dictated by the order you want sorted.  If a lower / higher value is found, the values at i and j are swapped.  

2. Describe (with words) how to search through an array or list for a given value using a linear search (the only one we used in class).
    * Create a loop that will continue until the end of the array is reached.  If you base it off the size of the array, make sure to start searching at element 0 and end the search at the size of the array - 1.  For each element, compare the value in the element to the value being searched for.  If a value is found, you can choose to keep track of instances with a counter or terminate the search once one instance is found.

3. What are some core differences between reserving space in the stack versus the heap?
    * When things are created on the stack, they are "static" until the program is ended.  There is no way to clear the memory of data stored in the stack.  When things are created on the heap, they are far more flexible - the size of memory can be adjusted, and data stored in memory can be freed.

4. I want to use a structure to create a linked list of that structure.  What needs to be added to the structure?
    * I need to add a pointer a structure of the same type to store the address of the next node.

5. Describe the difference between using &nump, nump, and *nump?
```
int num = 42;
int *nump;
nump = &num;
```
    * &nump gets the address of the pointer, not the address stored in the pointer
    * nump gets the address stored in the pointer
    * *nump gets the value stored at the address stored in the pointer

6. Explain how to print a linked list.  Make sure to specify the appropriate terminating condition.
    * Duplicate the value of head to the value of temp (so that head remains constant).  Create a loop that terminates when temp is equal to NULL.  For each iteration of the loop, print the value(s) in temp using point notation (such as temp->num), then set the value of temp to equal temp->next, the next node in the list.

7. If I overwrite the value for the pointer to the head of a linked list, and then try to use it later in my code, what will be the result?  Will I get the head of the linked list?  Something else?
    * If I overwrite the value of head I cannot recover any data also stored in that node or the address to the next node.  When I try to use it later, I won't have the value of head, so I can't move to the next node in the list.  To fix, I could store head in a temporary value, and just leave head alone.

8. 
```
#include <stdio.h>
#define MAX_NAME 15
#define MAX_VEHICLES 5

typedef struct {
    char make[MAX_NAME];
    char model[MAX_NAME];
    int year;
    double mileage;
} vehicle_t;

typedef struct {
    vehicle_t motors [MAX_VEHICLES];
} garage_t;

void read_info (garage_t *);
void print_all (garage_t *);

int main (void){ 
    garage_t my_garage; 
    read_info (&my_garage);
    print_all (&my_garage);    
    return 0;
}
```
Is my_garage in the stack or heap?
    * stack

9. Adding the word _____ in front of a type in a function parameter makes the variable "read only".  I can no longer change the value(s).
    * const

10. For every node initialized with malloc or calloc, there should be a corresponding call to _____ to release the node from memory once finished with the data stored there.
    * free

11. The function _____ would allow me to initialize 25 structures of type address_t in the heap.
    * calloc

12. I initialized 25 address_t structures in the heap using calloc, but only need x of those 25 now that I have read in user / file input.  I can use the function _____ to adjust the space reserved in memory.
    * realloc

13. strcmp will return _____ if both strings are equivalent.
    * 0

14. The last node in a linked list points to _____
    * NULL

15. Used in a loop, a break will move to the next iteration of the loop.
    * False.  A `break` will exit the loop right then.  A `continue` will go to the next iteration.

16. All arrays start at 1.
    * False.  Start at 0

17. If an array was initialized with a size of 9, the maximum element I can access is 8.
    * True

18. Utilize sizeof to find the number of elements in an array called buzz_lightyear
    * `int size = sizeof(buzz_lightyear) / sizeof(buzz_lightyear[0]);`

19. Initialize a node in the heap of type double.  Store its address in a pointer named num.
    * `double *num = (double *)malloc(sizeof(double));`

20. Copy the string "Bubbles make corgis crazy" into a char array named fun.  Assume the `string.h` library has been included.
    * `strcpy(fun, "Bubbles make corgis crazy");`

21. Create a structure called inventory_t that can store the following information: the name of an item, a count of how many items, and a decimal number called shelf life.
```
typedef struct {
    char item [20];
    int item_count;
    double shelf_life;
} inventory_t;
```

22. Initialize a list with the following contents: cookies, cake, ice cream
    * `char a_few_of_my_favorite_things [3][10] = {"cookies", "cake", "ice cream"};`

23. 
```
#include <stdio.h>
#define MAX_NAME 15
#define MAX_VEHICLES 5

typedef struct {
    char make[MAX_NAME];
    char model[MAX_NAME];
    int year;
    double mileage;
} vehicle_t;

typedef struct {
    vehicle_t motors [MAX_VEHICLES];
} garage_t;

void read_info (garage_t *);
void print_all (garage_t *);

int main (void){ 
    garage_t my_garage; 
    read_info (&my_garage);
    print_all (&my_garage);    
    return 0;
}
```
Create the function print_all for the code above.  print_all should print all values in a garage_t structure.  Use comments to detail the logic of your answer.

```
void print_all (garage_t *g){
    for (int i = 0; i < MAX_VEHICLES; i++){
        printf("%s: %s %d %lf\n", g->motors[i].make, g->motors[i].model, 
            g->motors[i].year, g->motors[i].mileage);
    }
}
```

24. Use sscanf to parse the following string into the variables exhibit, age, daily_visitors, and snack, respectively.  
`char info_to_parse[]= "Gorilla, 25, 53.2, bananas";`
    * `sscanf(info_to_parse, "%s, %d, %lf, %s", exhibit, &age, &daily_visitors, snack);`





