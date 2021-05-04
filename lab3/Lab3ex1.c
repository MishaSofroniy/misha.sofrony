#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "rlutil/rlutil.h"
int main() {
  setlocale (LC_CTYPE, "ua");
  int a, s;
  float f;
  setColor (WHITE);
  printf("******************\n");
  printf ("Введіть число a=");
  scanf("%d", &a);
  printf ("Введіть число s=");
  scanf("%d", &s);
  if (s<0)
    f=2*s+a*s*s;
  if (s==0)
    f=sqrt(s-15)+8*s*a;
  if (s>0)
    f=12-(s)/(2*a);
     printf("******************\n");
     setColor (GREEN);
     printf ("Результат обчислення скороченою формою if: f=%.2f\n", f);
     setColor (WHITE);
     printf("******************\n");
     if (s<0)
      f=2*s+a*s*s;
     else if (s>0)
      f=12-(s)/(2*a);
     else
       f=sqrt(s-15)+8*s*a;
      printf("******************\n");
      setColor (GREEN);
      printf ("Результат обчислення повною формою if else: f=%.2f\n", f);
      setColor (WHITE);
      printf("******************\n");
  return 0;
}
