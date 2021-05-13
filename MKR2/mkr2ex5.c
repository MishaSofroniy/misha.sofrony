#include <stdio.h>
// довжина масиву
int length_of_arr(){
  int n;
  printf("Введіть довжину масиву n: ");
  scanf("%d", &n);
  return n;
}
// ініціалізація масиву
void init(int n, float *arr){
    for(int i = 0; i < n; i++){
        printf("Введіть %d елемент: ", i+1);
        scanf("%f", &arr[i]);
    }
}
// вивід масиву
void print_arr(int n, float arr[n]){
    printf("Введений масив: {");
    for(int i = 0; i < n; i++){
        if(i != 0)
            printf(", ");
        printf("%.2f", arr[i]);
    }
    printf("}\n");
}
// перевернений масив
void inversion(int n, float arr[n]){
  printf("Масив у зворотному порядку: {");
    for(int i = n-1; i >= 0; i--){
        if(i != n-1)
            printf(", ");
        printf("%.2f", arr[i]);
    }
    printf("}\n");
}
int main() {
  int n = length_of_arr();
  float arr[n];
  init(n, arr);
  print_arr(n, arr);
  inversion(n, arr);
    return 0;
}
