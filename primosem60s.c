#include <stdio.h>
#include <time.h>
int primos(int n,int contador)
{
    if(n == contador)
    {
        printf("%d\n", n);
    }
    else if(n % contador == 0 || n < 2)
    {
        primos(n+1,1);
    }
    else
    {
        primos(n,contador + 1);// se for menor q 2 ou 2 desconsidera e retorna fazendo dnv
    }
}
void saida(int sig)
{
    exit(0);
}
int main()
{
    signal(SIGALARM,saida);
    alarm(60);
    primos(0,1);
}
