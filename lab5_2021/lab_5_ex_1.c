#include <stdlib.h>
#include <stdio.h>
#include "rlutil/rlutil.h"

int reverse( int num )
{
    int sign = 1;
    if ( num < 0 )
    {
        sign = -1;
        num = -num;
    }
    if ( num < 10 )
        return sign * num;
    int remainder = num % 10;
    int rev = reverse( num / 10 );
    for ( int tmp = rev; tmp; tmp /= 10 )
        remainder *= 10;

    return sign * (remainder + rev);
}

int main(void) {
    system("chcp 65001");
    int choose_it;
    int num;
    do {
        setColor(YELLOW);
        printf("--------------------------------\n");
        printf("Перейти до програми чи вийти?\n"
               "1 - Перейти до програми\n"
               "2 - Вийти\n");
        scanf("%d", &choose_it);
        if(choose_it == 2)
            break;
        else if(choose_it != 1)
            continue;
        setColor(WHITE);
        printf("Введіть число для провірки на паліндром: ");
        scanf("%d", &num);
        int res=0;
        res=reverse(num);
        printf("Введене число - %d, результат - %d\n", num, res);
        if(num == res)
        {
            setColor(GREEN);
            printf("Число %d є паліндромом!\n", res);
        } else{
            setColor(RED);
            printf("Число %d не є паліндромом!\n", res);
        }
        setColor(WHITE);
    }while (1);
    return 0;
}
