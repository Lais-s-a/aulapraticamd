#include <stdio.h>

int mdc(int x, int y)
{
    scanf("%d %d", &x, &y); // le os valores de x e y

    if (y == 0) // se y igual a 0
        return x; // retorna x

    else
        return mdc(y, x % y); // = mdc (b, a mod b)
}

int main()
{
    int x, y;

    printf("MDC: %d", mdc(x, y)); // imprime o resultado da função mdc

    return 0;
}ss