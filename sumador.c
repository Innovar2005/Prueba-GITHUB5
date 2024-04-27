#include <stdio.h>

int x1, x2, suma;
int main()
{
    printf("Ingresar un primer valor \n");
    scanf("%d", &x1);

    printf("Ingresar un segundo valor \n");
    scanf("%d", &x2);

    suma = x1 + x2;

    printf("La suma resulta = %d ", suma);

    return 0;
}
