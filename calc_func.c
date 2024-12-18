#include <stdio.h>
//functions:
int add (int a, int b);

int main () {
    int x;
    int y;

    printf("Say a number: ");
    scanf("%i",&x);
    printf("Say another number to make a sum: ");
    scanf("%i",&y);

    //call function
    printf("The sum of %d plus %d is %d: ",x, y, add(x,y));
}

int add (int a, int b) {
    return a + b;
}

