#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Ініціалізація глобальних констант

int randomd(int min, int max){
    int rand_num, temp;
    if(min <= 0){
        max+=1;
        temp = abs(min);
        rand_num = (min + temp) + rand() % (max + temp);
        rand_num -=temp;
    }
    else{
        do {
            rand_num = min+rand()%max;
            if(rand_num >= min && rand_num <= max)
                break;
        }
        while (1);
    }
    return rand_num;
}

float randomf(int min, int max){
    return randomd(min, max) - rand()/(float)RAND_MAX;
}
// Вивід масиву на екран
void print_arr(int m, int n, float arr[m][n]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%.2f\t", arr[i][j]);
        }
        printf("\n");
    }
}

// Сортування масиву
void sort_arr(int m, int n, float **arr[m][n]){
    int i, j, k;
    int nums[m];
    //Пройтися по кожному стовпцю
    for(i = 0; i < n; i++){
        // Пройтися по кожному елементу стовпця
        for(j = 0; j < m; j++){
            nums[j] = arr[j][i];
        }
        // Сортувати елементи
        for(j = 0; j < m; j++){
            for(k = 0; k < m-1; k++){
                if(nums[k] > nums[k+1]){
                    int temp = nums[k];
                    nums[k] = nums[k+1];
                    nums[k+1] = temp;
                }
            }
        }
        for(k = 0; k < m; k++)
            arr[k][i] = nums[k];
    }
}
int main(){
    system("chcp 65001");
    do {
        int flag = 0;
        int choose_it;
        srand(time(0));
        printf("------------------------------------\n");
        printf("Перейти до обчислень чи вийти з програми?\n"
               "Перейти до обчислень - 1\n"
               "Вийти - 2\n");
        scanf("%d", &choose_it);
        if(choose_it != 1 && choose_it != 2){
            printf("Ви ввели невірне значення!\n");
            continue;
        }
        printf("Введіть кількість рядків: ");
        int m, n;
        scanf("%d", &n);
        printf("Введіть кількість стовпців: ");
        scanf("%d", &m);
        if(m == n)
            printf("Матриця повинна бути прямокутною!\n", flag = 2);
        float array[m][n];
        if (flag == 2) continue;
        printf("------------------------------------\n");
        switch (choose_it) {
            case 2:
                flag = 1; break;
        }
        if (flag == 1)   break;
        // ------- Початок обчислень ------- //
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                array[i][j] = randomf(-100, 100);
            }
        }
        printf("Згенерована матриця:\n");
        print_arr(m, n, array);
        sort_arr(m, n, array);
        printf("\nВідсортована матриця:\n");
        print_arr(m, n, array);
        // ------- Кінець обчислень ------- //
    }while (1);
    return 0;
}
