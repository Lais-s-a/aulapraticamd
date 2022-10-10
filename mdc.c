#include <stdio.h>
int mdc(int x,int y)
{
    scanf("%d%d", &x, &y); // le os numeros
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
    printf("%d", mdc(x,y)); //chama e printa a fução recursiva 
}
