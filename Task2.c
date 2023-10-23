// Задача 2.НОД
// Составить функцию, которая определяет наибольший общий делитель двух натуральных чисел https://younglinux.info/algorithm/euclidean.

#include <stdio.h>

int nod(int a,int b) 
{
    
    while ((a != 0) && (b != 0))
        {
            if (a > b) a = a % b;
            else b = b % a;
        }
    return a+b;
}

int main(void) 
{
    int a1, b1;
    printf ("Input numbers: \n");
    scanf("%d%d", &a1, &b1);
    printf("%d", nod(a1,b1));
    return 0;
}