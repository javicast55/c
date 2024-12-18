#include  <stdio.h>
int main(void)
{
    int x;
    int y;

    printf("Tell me your a number: ");
    scanf("%i", &x);

    printf("Tell me a second number: ");
    scanf("%i", &y);

    int total = x + y; 

    printf("\nThe sum of %d plus %d is: %d\n", x,y,total);
}