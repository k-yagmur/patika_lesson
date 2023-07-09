#include <stdio.h>

int main(void) {
    FILE *file;
    char text[100];

    file = fopen("metin.txt", "w");
    fprintf(file, "bu bir metin dosyasidir");
    fclose(file);

    file = fopen("metin.txt", "r");
    fgets(text, sizeof(text), file);
    printf("Dosyadan okunan metin: %s\n", text);
    fclose(file);

    return 0;
}
