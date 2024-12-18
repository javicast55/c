#include <stdio.h>
int main (void)
{
    char name[] = ""; 
    printf("Cual es tu nombre?: ");
    scanf("%s", &name);
    printf("!!Hola %s, el mejor programador nunca antes visto!!", name);
}