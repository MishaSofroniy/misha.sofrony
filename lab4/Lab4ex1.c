#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
  int a, b;
  float c;
  setlocale (LC_CTYPE, "ua");
  do {
    printf ("Введіть число а:");
  scanf("%d", &a);
  printf ("Введіть число b:");
  scanf("%d", &b);
    if((a-2*b)<0)
      printf ("Для заданих чисел а та b добувається корінь з від'ємного числа!\n");
    else if(sqrt(a-2*b)+2*b==0)
      printf ("Для заданих чисел а та b вібувається ділення на нуль!\n");
    else {
      c=((2*a-b)*(2*b-a))/(sqrt(a-2*b)+2*b);
    printf("Відповідь:%.2f\n", c);
  }
  } while (1);
}
