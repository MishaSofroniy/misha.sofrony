#include <stdio.h>
#include <math.h>
int main() {
  float x, y, z, b;
      printf("\n------------------------------\n");
      printf("Задайте три дійсних числа:\n");
      printf("------------------------------\n");
      printf("\nЗадайте число x: ");
      scanf("%f", &x);
      printf("Задайте число y: ");
      scanf("%f", &y);
      printf("Задайте число z: ");
      scanf("%f", &z);
      if((pow(x, 4)/2)+pow(sin(z), 2) == 0)
        printf("При заданих значеннях x та z виконується ділення на 0");
      else{
        b = (1+cos(y-2))/((pow(x, 4)/2)+pow(sin(z), 2));
        printf("Результат: %.2f", b);
      }
  return 0;
}
  
