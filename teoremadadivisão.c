// Implemente um programa que receba dois inteiros positivos e calcule o valor do quociente e resto da divisão do primeiro pelo segundo número.

#include <stdio.h>

int main() {
  
  int n, d;
  scanf("%d %d", &n, &d);
  
  
  int r =  n % d;
  int q = n/d;
  
  
  
  printf("%d %d", q, r );
  
  return 0;
}
