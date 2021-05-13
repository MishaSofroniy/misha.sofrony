#include <stdio.h>
#include <math.h>
int main() {
  float u, v;
      printf("\n------------------------------\n");
      printf("Задайте два дійсних числа:\n");
      printf("------------------------------\n");
      printf("\nЗадайте число u: ");
      scanf("%f", &u);
      printf("Задайте число v: ");
      scanf("%f", &v);
  float f, f2, z;
  f=((u+v)/(pow(u,2)+u*v+pow(v,2)))+(u/(1+pow(v,2)))+(v/(1+pow(u,2)));
  v*=v;
  u*=u;
  f2=((u+v)/(pow(u,2)+u*v+pow(v,2)))+(u/(1+pow(v,2)))+(v/(1+pow(u,2)));
  z=f+f2;
  printf("Результат: %.2f", z);
  return 0;
}
