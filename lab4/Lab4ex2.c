#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
  const int min=-20;
  const int max=10;
  int choice, a;
  do {
    int i=min;
    a=0;
    setlocale (LC_CTYPE, "ua");
    printf ("------------------------------------------\n");
    printf ("Яким способм ви хочете отримати розв'язок?\n1)for\n2)while\n3)do while\n");
    scanf ("%d", &choice);
    if (choice>3 || choice<1) {
      printf ("Ви ввели не коректне значення! Спробуйте ще раз.\n");
    }
    switch(choice){
    case 1:
    for(int i=min; i<=max; i++) {
      if (i>0) a+=i;
    }
      a=pow(a, 2);
      a++;
      printf ("Виконано цикл for. Відповідь:%d\n", a);
    break;
    case 2:
    while (i<=max) {
    if (i>0) a+=i;
    i++;
    }
    a=pow(a, 2);
    a++;
    printf("Виконано циклом while. Відповідь: %d\n", a);
    break;
    case 3:
do {
  if (i>0) a+=i;
  i++;
} while(i<=max);
    a=pow(a, 2);
    a++;
    printf("Виконано циклом do while. Відповідь: %d\n", a);
    break;
  }
    }while(1);
}
