#include <stdio.h>

int main() {
    float cm, inch, foot;

    printf("Nhap so cm: ");
    scanf("%f", &cm);

    inch = cm / 2.54;
    foot = inch / 12;

    printf("%.1f centimeters tuong duong %.1f foot.\n", cm, foot);
    printf("%.1f centimeters tuong duong %.1f inches.\n", cm, inch);

    return 0;
}
