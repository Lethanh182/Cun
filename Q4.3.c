#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char c;
    int count = 0;

    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    printf("Nhap ki tu de tim kiem: ");
    scanf(" %c", &c);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }

    if (count > 0) {
        printf("Ky tu '%c'duoc tim thay %d lan.\n", c, count);
    } else {
        printf("Khong tim thay ki tu '%c'.\n", c);
    }

    return 0;
}