#include <stdio.h>
#include <cs50.h>
#include <string.h>




void decimalToHexadecimal(int decimal) 
{
    char hexadecimal[100];
    int i = 0;

    while (decimal != 0) 
    {
        int remainder = decimal % 16;
        if (remainder < 10) 
        {
            hexadecimal[i] = remainder + '0';
        } 
        else 
        {
            hexadecimal[i] = remainder + 'A' - 10;
        }
        decimal /= 16;
        i++;
    }

    printf("Onaltılık sayı: ");
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%c", hexadecimal[j]);
    }
    printf("\n");
}

int main() 
{
    int decimal;

    printf("Ondalık sayıyı girin: ");
   

    decimalToHexadecimal(decimal);

    return 0;
}
