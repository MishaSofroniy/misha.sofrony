#include <stdio.h>
#include <math.h>
void result(){
  float a = (sqrt(2) + 2 + 2*2)/(sqrt(3) + 3 + 3*3);
  float b = (sqrt(5) + 5 + 5*5)/(sqrt(7) + 7 + 7*7);
  float c = (sqrt(6) + 6 + 6*6)/(sqrt(9) + 9 + 9*9);
  float d = (sqrt(4) + 4 + 4*4)/(sqrt(8) + 8 + 8*8);
  float res = a+b+c+d;
  printf("Результат: %.2f", res);
}

int main() {
  result();
  return 0;
}
