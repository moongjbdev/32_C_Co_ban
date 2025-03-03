#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float D, Dx, Dy, x, y;

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    printf("Nhap he so d: ");
    scanf("%f", &d);
    printf("Nhap he so e: ");
    scanf("%f", &e);
    printf("Nhap he so f: ");
    scanf("%f", &f);

    D = a*e - b*d;
    Dx = c*e - b*f;
    Dy = a*f - c*d;

    if (D == 0) {
        if (Dx == 0 && Dy == 0) {
            printf("He phuong trinh vo so nghiem\n");
        } else {
            printf("He phuong trinh vo nghiem\n");
        }
    } else {
        x = Dx/D;
        y = Dy/D;
        printf("He phuong trinh co nghiem:\n");
        printf("x = %.2f\n", x);
        printf("y = %.2f\n", y);
    }

    return 0;
}
