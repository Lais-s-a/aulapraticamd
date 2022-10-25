#include <stdio.h>
int primo(int n, int div)// p ver se o dia ? primo
{
    if(n == div)
    {
        return 1;
    }
    if(n % 2 == 0 || n % div == 0)
    {
        return 0;
    }
    if(n < 2)
    {
        return 0;
    }
    
    return primo(n, div +1);
}
int fatores(int n, int fator)
{
    if(n == 1 && fator != 1)
    {
        return 0;
    }
    else
    {
        if(n % fator == 0 && primo(fator,2) == 1)
        {
           printf("%d\n", fator);
           fatores(n / fator, fator);
        }
        else
        {
            fatores(n, fator + 1);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 0)
    {
    fatores(n,2); 
    }
    else
    {
        printf("0");
    }
    return 0;
}
