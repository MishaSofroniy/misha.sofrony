#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
const int min = -50, max = 100, N = 10;


int sum_negative(int *arr, int n){
  int sum = 0;
  for(int i = 0; i < n; i++){
    if (arr[i] < 0)
      sum+=arr[i];
  }
  return sum;
}

int dobutok(int *arr, int n){
  int min = 0, max = 0, d = 1;
  for(int i = 0; i < n; i++){
    if (arr[i] < arr[min])
      min = i;
    if (arr[i] > arr[max])
      max = i;
  }
  if(max > min)
    for(int i = min+1; i < max; i++)
      d*=arr[i];
  else
    for(int i = max+1; i < min; i++)
      d*=arr[i];
  printf("Добуток чисел розташованих між максиммальним і мінімальним елементами: %d\n", d);
}

void init(int *arr, int n){
    for(int i = 0; i < n; i++){
        arr[i] = min+rand()%max;
    }
}

void print(int n, int *arr){
    printf("--------------------\n");
    printf("Утворений масив: ");
    printf("[");
    for(int i = 0; i < n; i++){
        if(i != 0)
            printf(", ");
        printf("%d", arr[i]);
    }
    printf("]\n");
}

int main() {
  srand(time(0));
  int arr[N];
  int a;
  do{
    init(arr, N);
    print(N, arr);
    printf("Сума від'ємних елементів: %d\n", sum_negative(arr, N));
    dobutok(arr, N);
    printf("Продовжити - 1\n");
    scanf("%d", &a);
    if(a != 1)
      break;
  }while(1);
  return 0;
}
