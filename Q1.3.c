#include <stdio.h>

int main() {

    double a, b, c, x;
    printf("Nhap gia tri cua a:");
    scanf("%lf", &a);
    printf("Nhap gia tri cua b:");
    scanf("%lf", &b);
    printf("Nhap gia tri cua c:");
    scanf("%lf", &c);
    
    x = (c + b) / a;
    printf("Gia tri cua X la: %.2f\n", x);

    return 0;
}