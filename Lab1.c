#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
  int a, b;
  float c, p;
  setlocale (LC_CTYPE, "ua");
  printf("********************************");
  printf("\nВведіть довжину першої сторони a = ");
  scanf("%d", &a );
  printf("Введіть довжину другої сторони b = ");
  scanf("%d", &b);
  printf("********************************");

  c=sqrt(pow(a, 2)+pow(b, 2));
  p=a+b+c;
  printf("\nДовжина третьої сторони трикутника = %.2f\n", c);
  printf("Периметр трикутника = %.2f\n", p);
  printf("********************************");
return 0;
}
