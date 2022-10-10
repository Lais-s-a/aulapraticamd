#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primos(int n,int contador)
{
    if(n == contador) //se n = 2 e 2 = contador ... se n = 3 e 3 = contador...
    {
        return 1; // 1 = primo
    }
    else if(n % contador == 0 || n < 2) // se n divisivel por 2 sendo mmenor q 2 (1,0, negativos)
    {
        return 0;// 0 = não é primo
    }
    else // usa o mesmo n sendo q divido por 3,4,5,6... até n == contador
    {
        primos(n,contador + 1);
    }
}
void recursao()
{
    int n; 
    scanf("%d", &n); //lendo o numero n qualquer 
    
    if(n == -1) //parada 
    {
        return ;
     
    }
    else 
    {
        printf("%d\n", primos(n,2)); //chamando a função matemática , o 2 é pq o contador irá começar no 2(menor n primo considerado aq )
        recursao(); //chamando a recursão na recursiva para repetir em n vezes
    }
}
int main() 
{
    recursao(); //chamando a função recursiva
    return 0;
}
