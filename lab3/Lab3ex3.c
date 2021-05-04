#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "../rlutil/rlutil.h"
int main() {
  int a, b;
  float x;
  setColor (WHITE);
  setColor (GREEN);
  printf ("************************\n");
  setColor (WHITE);
  printf ("Задайте ціле число a:");
  scanf ("%d", &a);
  printf ("Задайте ціле число b:");
  scanf ("%d", &b);
  setColor (GREEN);
  printf ("************************\n");
  setColor (WHITE);
  if (a-pow(b, 2)<0 || a*b<0) {
  setColor (RED);
  printf ("******************************************************************\n");
  printf ("Для заданих значень a та b, добувається корень з від'ємного числа!\n");
  printf ("******************************************************************\n");
  setColor (WHITE);
  return 0;
}
  x=sqrt(a-pow(b, 2))+sqrt(a*b);
  setColor (CYAN);
  printf ("************************\n");
  printf ("Ваша відповідь: x=%.2f\n", x);
  printf ("************************\n");
  setColor (WHITE);
  return 0;
}
