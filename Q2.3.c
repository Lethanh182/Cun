#include <stdio.h>

int main() {
    int n, i, sum = 0, count = 0;
    float average;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int array[n];
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            sum += array[i];
            count++;
        }
    }
    if (count > 0) {
        average = (float) sum / count;
        printf("Trung binh cong cua cac so le la: %.3f\n", average);
    } else {
        printf("Khong co so le trong mang.\n");
    }

    return 0;
}