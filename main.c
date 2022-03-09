#include <stdio.h>

int main(void) {
  int a;
  
  printf("Podaj liczbę: ");
  scanf("%d", &a);

  if(a%2) {
    printf("Liczba jest nieparzysta");
    } else {
    printf("Liczba jest parzysta");
  }
  
  return 0;
}