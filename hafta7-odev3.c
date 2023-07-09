#include <stdio.h>

int main() {
    int nm1 = 10;
    int nm2 = 30;


    int *pointr1, *pointr2;


    pointr1 = &nm1;
    pointr2 = &nm2;

    printf("num1 = %d\n", *pointr1);
    printf("num2 = %d\n", *pointr2);

    return 0;
}
