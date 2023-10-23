// Задача 4. Сумма от 1 до N.

#include <stdio.h>

int Sum_all_numbers(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    return sum;

}

int main(void) 
{
    int a;
    printf("Input number: \n");
    scanf("%d", &a);
    printf("%d", Sum_all_numbers(a));
    return 0;
}
