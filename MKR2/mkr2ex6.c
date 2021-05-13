#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Ініціалізація глобальних констант
const int LOW = -50, HIGH = 151, m = 10;
int randomd(int min, int max){
  return min+rand()%max;
}
// Ініціалізація масиву випадковими елементами
void init_rand(int m, int arr[m][m]){
    srand(time(0));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = randomd(LOW, HIGH);
        }
    }
}
// вивід масиву на екран
void print_arr(int m, int arr[m][m]){
  int min = 0, max = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
          if(arr[i][j] < min)
            min = arr[i][j];
          if(arr[i][j] > max)
            max = arr[i][j];
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
  printf("Мінімальне число - %d\n Максимальне число - %d\n", min, max);
  printf("Середнє арифметичне максимального і мінімального елементів: %.2f", (float)(min+max)/2);
}
int main() {
  int arr[m][m];
  init_rand(m, arr);
  print_arr(m, arr);
    return 0;
}
