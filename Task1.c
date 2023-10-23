// Задача 1. Сколько зерен на доске?

#include <stdio.h>

int HowManyGrains(int n) 
{
    
    int how = 1;
    for (int i = 1; i<n; i++) 
    {
        how *= 2;
    }
    return how;
}

int main(void) 
{
    int a;
    printf ("Input number: \n");
    scanf("%d", &a);
    printf("%d", HowManyGrains(a));
    return 0;
}