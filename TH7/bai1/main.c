#include <stdio.h>
#define PI 3.14159

float tinhDienTich(float r) {
    return PI * r * r;
}

float tinhChuVi(float r) {
    return 2 * PI * r;
}

int main() {
    float r;
    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &r);

    printf("Diện tích: %.2f\n", tinhDienTich(r));
    printf("Chu vi: %.2f\n", tinhChuVi(r));

    return 0;
}
