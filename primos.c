#include <stdio.h>

int primos(int n, int contador)
{
    if(n == contador)
        return 1;
    else if(n % contador == 0 || n < 2)
        return 0;
    else
        return primos(n, contador + 1);
}

void recursao()
{
    int n;
    scanf("%d", &n);
    if(n = -1)
        return;
    else
    {
        printf("%d\n", primos(n, 2));
        recursao();
    }
}

int main()
{
    recursao();
    return 0;
}
