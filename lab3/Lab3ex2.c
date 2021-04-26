// Введення бібліотек
#include <stdio.h>
#include <locale.h>
#include "rlutil/rlutil.h"
#include <math.h>
int main() {
  int y1, y2, m1, m2, d1, d2, h, g;
  setlocale (LC_CTYPE, "ua");
  setColor (WHITE);
  printf ("Введіть рік народження першої людини:");
  scanf ("%d", &y1);
  printf ("Введіть місяць народження першої людини:");
  scanf ("%d", &m1);
  printf ("Введіть день народження першої людини:");
  scanf ("%d", &d1);
  printf ("Введіть рік народження другої людини:");
  scanf ("%d", &y2);
  printf ("Введіть місяць народження другої людини:");
  scanf ("%d", &m2);
  printf ("Введіть день народження другої людини:");
  scanf ("%d", &d1);
  if (m1>12 && m2>12) {
    setColor (RED);
    printf ("Ви ввели неправильний місяць");
    setColor (WHITE);
  }
  if (m1==2 && m2==2) {
    if (d1>29 && d2>29) {
      setColor (RED);
      printf ("У лютому не буває більше 29 днів!");
      setColor (WHITE);
    }
  }
  if (m1==4 && m2==4) {
    if (d1>30 && d2>30) {
      setColor (RED);
      printf ("У квітні не буває більше 30 днів!");
      setColor (WHITE);
    }
  }
  if (m1==6 && m2==6) {
    if (d1>30 && d2>30) {
      setColor (RED);
      printf ("У червні не буває більше 30 днів!");
      setColor (WHITE);
    }
  }
  if (m1==9 && m2==9) {
    if (d1>30 && d2>30) {
      setColor (RED);
      printf ("У вересні не буває більше 30 днів!");
      setColor (WHITE);
    }
  }
  if (m1==11 && m2==11) {
    if (d1>30 && d2>30) {
      setColor (RED);
      printf ("У листопаді не буває більше 30 днів!");
      setColor (WHITE);
    }
  }
  if (m1==1 && m2==1) {
    if (d1>31 && d2>31) {
      setColor (RED);
      printf ("У січні не буває більше 31 дня!");
      setColor (WHITE);
    }
  }
  if (m1==3 && m2==3) {
    if (d1>31 && d2>31) {
      setColor (RED);
      printf ("У березні не буває більше 31 дня!");
      setColor (WHITE);
    }
  }
  if (m1==5 && m2==5) {
    if (d1>31 && d2>31) {
      setColor (RED);
      printf ("У травні не буває більше 31 дня!");
      setColor (WHITE);
    }
  }
  if (m1==7 && m2==7) {
    if (d1>31 && d2>31) {
      setColor (RED);
      printf ("У липні не буває більше 31 дня!");
      setColor (WHITE);
    }
  }
  if (m1==8 && m2==8) {
    if (d1>31 && d2>31) {
      setColor (RED);
      printf ("У серпні не буває більше 31 дня!");
      setColor (WHITE);
    }
  }
  if (m1==10 && m2==10) {
    if (d1>31 && d2>31) {
      setColor (RED);
      printf ("У жовтні не буває більше 31 дня!");
      setColor (WHITE);
    }
  }
  if (m1==12 && m2==12) {
    if (d1>31 && d2>31) {
      setColor (RED);
      printf ("У грудні не буває більше 31 дня!");
      setColor (WHITE);
    }
  }
  h=abs(m1-m2);
  g=abs(y1-y2);

  if (y1<y2) {
    printf ("Перша людин старша на %d роки", g);
  }
  if (m1<m2) {
    printf(" і на %d міс.\n", h);
  }
  else {
    printf ("Перша людина має менше років");
  }
  return 0;
}
