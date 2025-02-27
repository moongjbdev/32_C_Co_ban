#include <stdio.h>
#define PI 3.14159

int main() {
    double r, S, V;

    printf("Nhap ban kinh hinh cau: ");
    scanf("%lf", &r);

    S = 4 * PI * r * r;
    V = (4.0 / 3) * PI * r * r * r;

    printf("Dien tich hinh cau: %.2lf\n", S);
    printf("The tich hinh cau: %.2lf\n", V);

    return 0;
}
