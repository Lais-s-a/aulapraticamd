#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int primos(int n, int contador) {
  if (n == contador) {
    printf("%d\n", n);
    primos(n + 1, contador + 1);
  } else if (n % contador == 0 || n < 2) {
    primos(n + 1, 2);
  } else {
    primos(n,
           contador +
               1); // se for menor q 2 ou 2 desconsidera e retorna fazendo dnv
  }
}
void saida(int sig) { exit(0); }
int main() {
  signal(SIGALRM, saida);
  alarm(60);
  primos(2, 2);
}
