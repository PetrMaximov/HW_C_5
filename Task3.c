//Задача 3. Сумма цифр равна произведению.

#include <stdio.h>
int is_happy_number(int n)
{
    int sum = 0;
    int mult = 1;
    while (n > 0)  
    {
        sum += n%10;
        mult *= n%10;
        n /= 10;
    }

    if (sum == mult) return 1;
    else return 0;
}
int main(void) 
{
  int a;
  printf ("Input number: \n");
  scanf("%d", &a);
    if (is_happy_number(a)) 
        {
            printf("YES\n");
        } 
    else 
        {
            printf("NO\n");
        }
  return 0;
}