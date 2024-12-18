#include <stdio.h>

int colum (int n);
int main(void)

{
    int n;
    printf("Cuantas columnas y filas? :");
    scanf("%d", &n);
    colum(n);
}

int colum (int n) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            printf("#");
        }
        printf("\n");
    }
}
