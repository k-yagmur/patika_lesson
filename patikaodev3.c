#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;
    else if (num1 > num2)
        return 1;
    else
        return 0;
}

void GenerateRandomArray(int array[], int size) {
    int i;

    for (i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

int main() {
    int array[10];
    int i;

    // Başlangıç değeri olarak 0 kullan
    unsigned int seed = 0;
    srand(seed);

    GenerateRandomArray(array, 10);

    printf("Rastgele dizinin elemanları: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    qsort(array, 10, sizeof(int), compare);

    printf("Sıralanmış dizinin elemanları (büyükten küçüğe): ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


