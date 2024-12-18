#include <stdio.h>
int main() {
    //variables declared
    int x;
    int y;
    //Read user numbers
    printf("Write a number: ");
    scanf("%i", &x);
    printf("Write another number: ");
    scanf("%i", &y);
    //if conditional
    if (x < y)
    {
        printf("%d is less than %d", x,y);
    }
    else if (x == y)
    {
        printf("%d is equal to %d", x,y);
    }
    
    else{
        printf("%d is greater than %d", x,y);
    }
}
