#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char c;

    printf("Do you agree with this?: Type \"y\" or \"n\" ");
    scanf("%c",&c);

    if (tolower(c) == 'y')
    {
        printf("\nAgreed");
    }

    if (tolower(c) == 'n')
    {
        printf("\nNot agreed");
    }
}