#include <stdio.h>
#include <math.h>
int main() {
  int x;
  printf("------------------------------\n");
  printf("Задайте ціле число: \n");
  scanf("%d", &x);
  if(x % 2 == 0)
    printf("Число парне!\n");
  else
    printf("Число непарне!\n");
  return 0;
}
