#include <stdio.h>
#include <math.h>

int main (void){
    for (int i = 0; i <= 100; i = i + 4){
        printf("%d ", i);
    }
    printf("\n");
    int i = 0;
    while (i <= 100){
        printf("%d ", i);
        i = i + 4;
    }
    return 0;
}


