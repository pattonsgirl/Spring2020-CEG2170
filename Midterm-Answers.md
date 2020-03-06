Ways to get a chacters = ways to scan a character
For multiples of 4, do every 4
ie. 4 8 12 16 20, etc.
Print formatting does not matter

1. What is the output of the following code:

void foo ();
int num = 2;
int main (void){
    num = 4;
    foo();
    printf("%d", num);
    return 0;
}

void foo(){
    num = 6;
}

Since num is global, answer is 6.

2. #define and #include are _
pre-processor directives.  #include is for libraries, #define is for vales that will be replaced in your code before your program compiles

3. List the data types corresponding to the %lf in scan and print statements?
double(s)

4. Describe two ways I can get a character in c.
I can use a scanf statement to scan for "%c" and store it to the address of a character variable.  I can also use variable_name = getchar() where variable_name is the name of the variable to store the value in.

5. My code asks the user for input.  Sometimes it doesn't wait for user input and moves to the next step, which produces some odd results.  What issue am I facing?  How can I solve it?
You are likely dealing with buffer overflow.  This can be solved by formatting your expected input to catch enter characters, using fflush(), or by creating a loop with getchar to clear everything until a certain character is seen: while(getchar() != "\n")

6. Create a scanf statement that puts values in the following variables, in order.  Assume the user will put a command and then a space between each input

char p;
int n;
double m;

scanf("%c %d %lf", &c, &n, &m);

7. I can use a while loop to perform the same behavior as a for loop.
Fact.  Both can use iterators.

8. What is the difference between using break and continue in a loop?
Continue moves back to the top of the loop - remaining code in the loop is ignored.  Breaks exit the loop entirely - another iteration of the loop is not performed.

9. Provide the output for the following code:

int i = 0; int x = 0;
for(i = 1; i < 10; i = i*2){
    x++;
    printf("%d ", x);
}
printf("\nx = %d", x);

The only variable that will print is the value of x.  The for loop uses the variable i, and i is multiplied by 2 every run.  x increments by 1 every time the loop is run.  The first time the loop runs, i = 1, then 2, then 4, then 8 (when i = 16, the relational condition will not be valid, so the loop will end).  Now we know this loop runs 4 times.  x starts at 0.  It is incremented before printing.
Output:
1 2 3 4 
x = 4

10. What value does a pointer hold?  Does a pointer have its own address?
A pointer holds an address.  A pointer has it's own address in memory - it can be deleted and have no affect on other variables using the address.

11.  What is the output of the following:

int num1 = 5;
int *num1p;
num1p = &num1;
*num1p = 10;
int *num2p = num1p;
*num2p = 15;
printf("%d", num1);

It is originally initialized to 5.  The value is then 10.  Then it is 15

12. What is the output of the following:

int main (void){
    int num1 = 5; int num2 = 5;
    int *num1p;
    num1p = &num1;
    num2 = func1(num1, num1p);
    printf("num1 is %d and num2 is %d", num1, num2);

    return 0;
}

int func1 (int a, int *bp){
    *bp = *bp * a;
    return *bp + a;
}

func1 has 'a' as an input parameter, *bp as an output parameter, and returns an integer value.  func1 is sent value of num1, which is 5.  When I see a used in funct1, I can replace it with 5.  *bp points to the value of the address sent in main, which is the address to num1 in main.  The first line of the function multiplies the value in the address (5) by 5, and then store the result in the address.  So now *bp in my function and num1 in main have value 25.  The next line of the function sets the return value, which will be an integer.  The return value is value at the address plus 5, which is 30.
Output is:
num1 is 25 and num2 is 30

13. Describe the difference(s) between using a return value of a function vs using output parameters of a function.
Return values of a function are used to return a value.  Output parameters apply to using pointers to modify values at addresses.  This was done in lab 5 to "output" a value from a function by modifying the value at the address of a variable in main.  The address of the variable in main was passed to the function in the parameter list.

14. I have two relational statements in my if statement condition.  I want the code in the if statement to run if either relational statements are true.  What logical operator should I use?
|| (OR) will return true if both sides are true, or if either side is true.  If both sides are false, it will return false.

15. Evaluate if the expression will be true or false

1 && (30 % 10 >= 0) && (30 % 10 <= 3)

1 is 1, (30 % 10 >= 0) = (0 >= 0), (30 % 10 <= 3) = (0 <= 3).  All expressions are true, so the expression is true.

16. Write a for or while loop that prints all multiples of 4 from 0 to 100.
I did not specify if 0 or 100 needed to be included, so working code qualifies here.
For loop example:
    for (int i = 0; i <= 100; i+4){
        printf("%d ", i);
    }
While loop example:
    int i = 0;
    while (i <= 100){
        printf("%d ", i);
        i = i + 4;
    }
Output:
0 4 8 12 16 20 24 28 32 36 40 44 48 52 56 60 64 68 72 76 80 84 88 92 96 100