#include <stdio.h>


int mdc(int x,int y)
{
    if( y == 0) // caso mais basico de mdc ex mdc (10, 0) = 10 
    {
        return x;
    }
    else // se nao calculara o mdc na forma de euclides = mdc(a, a -  * c) proximo passo = mdc (b, a mod b)
    {
        return mdc(y, (x % y)); // = mdc(b, a mod b)
    }
}

    

int main()
{

    int x,y; // 2 numeros dados
    scanf("%d%d", &x, &y); // le os numeros
    
    int mmc = x * y / mdc(x,y); // teorema a * b = mdc * mmc;
  
    printf("mmc = %d e mdc = %d ", mmc, mdc(x,y));

    return 0;
}
