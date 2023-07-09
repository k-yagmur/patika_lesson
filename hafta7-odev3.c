#include <stdio.h>
#include <cs50.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main(void)
{
    int num;

    num = get_int("Bir sayi giriniz: ");

    int result = factorial(num);

    printf("Faktoriyel: %d\n", result);

    return 0;
}
