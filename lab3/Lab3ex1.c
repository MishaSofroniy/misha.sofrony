#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
  setlocale (LC_CTYPE, "ua");
  int a, s;
  float f;
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
     printf ("Відповідь: f=%.2f\n", f);
     printf("******************\n");
     if
  return 0;
}
