# Topic List for Final

* pointers
    ```
    int book = 789;
    int *bookp;
    bookp = &book;
    &bookp vs. bookp vs. *bookp
    ```
* arrays
    * how to loop through array
    * multi dimensional arrays
    * sorting an array (selection sort)
    * use elements to access data
        * what is the min / max element you can use to access the data
* strings
    * how to initialize a list
    * strcpy
        * only for strings
    * sscanf to parse a string
    * strcmp - no alphabeticalness
        * if identical - returns 0, need to make sure to check the return value of strcmp
        * if (strcmp("banana", "banana") == 0) { stuff can happen }
        * if (strcmp("banana", "apple") == 0) { stuff won't happen }
* structures
    * know how to initialize based on information given
    * variable.stuff_in_structure
    * variablep->stuff_in_structure
    * (*variablep).stuff_in_structure
* heap
    * malloc
        * char *letterp = (char *)malloc(sizeof(char));
    * calloc - know the concept
    * realloc - know the concept
    * free
        * free (letterp);
    * heap vs stack
        * dynamically allocate memory
        * delete nodes
* linked lists
    * what needs to be in a structure to use a linked list?
    * what do they begin and end with
* linear search
* very useful terms / functions:
    * const
        * used to set up a "read only" access usually when passing a pointer to a function
    * typedef
        * using to create aliases of type names
    * sizeof
        * returns how much space is taken up by what is passed
        * we've been using it to find how many elements & to tell malloc the space we need a node to have

Final Exam Details: 
Open on Friday, 5/1, from 9:00 AM to 11:59 PM 
You get two (2) hours from when you start the exam 
You may use an electronic or printed "cheat sheet"

Additional due dates: 
Lab 09 - 4/24 
Lab 10 (Extra Credit Only - will apply to class, not lab total) - 5/1
