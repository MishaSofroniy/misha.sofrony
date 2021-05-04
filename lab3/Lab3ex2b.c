#include <stdio.h>
#include <locale.h>
#include "rlutil/rlutil.h"
int main() {
  int day;
  setColor (WHITE);
  printf("Введіть номер дня тижня:");
  scanf("%d", &day);
  switch (day) {
    case 1:
      setColor (GREEN);
      printf ("Понеділок");
      setColor (WHITE);
      break;
    case 2:
      setColor (GREEN);
      printf ("Вівторок");
      setColor (WHITE);
      break;
    case 3:
      setColor (GREEN);
      printf ("Середа");
      setColor (WHITE);
      break;
    case 4:
      setColor (GREEN);
      printf ("Четверг");
      setColor (WHITE);
      break;
    case 5:
      setColor (GREEN);
      printf ("П'ятниця");
      setColor (WHITE);
      break;
    case 6:
      setColor (GREEN);
      printf ("Субота");
      setColor (WHITE);
      break;
    case 7:
      setColor (GREEN);
      printf ("Неділя");
      setColor (WHITE);
      break;
   default:
   setColor (RED);
   printf("Такого дня не існує!\n");
   setColor (WHITE);
  }
  return 0;
}
