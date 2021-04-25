#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
  int a, b, c, d, e;
  setlocale (LC_CTYPE, "ua");
  printf("********************************");
  printf("\nВведіть перше число a = ");
  scanf("%d", &a );
  printf("Введіть друге число b = ");
  scanf("%d", &b);
  printf("********************************");
  c=a%b;
  d=b-a;
  e=a+b;
  printf("\nЗалишок від діленя a на b: %d\n", c);
  printf("Різниця b на а: %d\n", d);
  printf("Сума чисел a та b: %d\n", e);
  return 0;
}
