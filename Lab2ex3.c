#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
  int x, y, z;
  float f;
  setlocale (LC_CTYPE, "ua");
  printf ("************************\n");
  printf("Введіть ціле число x=");
  scanf("%d", &x);
  printf("Введіть ціле число y=");
  scanf("%d", &y);
  printf("Введіть ціле число z=");
  scanf("%d", &z);
  f=(pow(x, 2)+pow(z, 2))/(sqrt(x+y));
  printf ("************************\n");
  printf("Відповідь f=%.2f\n", f);
  printf ("************************\n");
  return 0;
}
