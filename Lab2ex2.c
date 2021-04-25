#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
  const int a=25, b=2, c=-9;
  float y;
  y=(5*a-b+pow(c, 2))/(2+c)+1;
  setlocale (LC_CTYPE, "ua");

  printf ("*************************************************");
  printf("\nТак як задані величини сталі, відповідь =%.2f\n", y);
  printf ("*************************************************\n");
  return 0;
}
