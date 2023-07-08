#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void ReverseText(char *text) {
    int length = strlen(text);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = text[i];
        text[i] = text[j];
        text[j] = temp;
    }
}

bool IsPalindrome(char *text) {
    int length = strlen(text);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (text[i] != text[j]) {
            return false;
        }
    }

    return true;
}

int main() {
    char text[100];

    printf("Metni girin: ");
    fgets(text, sizeof(text), stdin);

    if (text[strlen(text) - 1] == '\n') {
        text[strlen(text) - 1] = '\0';
    }

    ReverseText(text);

    printf("Tersine cevrilmis metin: %s\n", text);

    if (IsPalindrome(text)) {
        printf("%s bir palindromdur.\n", text);
    } else {
        printf("%s bir palindrom değildir.\n", text);
    }

    return 0;
}
