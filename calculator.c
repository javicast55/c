#include  <stdio.h>
int main(void)
{
    int x;
    int y;

    printf("First tell me a number: ");
    scanf("%i", &x);

    printf("Now tell me a second number: ");
    scanf("%i", &y);

    int total = x + y; 

    printf("\nThe sum of %d plus %d is: %d\n", x,y,total);
}