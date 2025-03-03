#include <stdio.h>

int main() {
    float diem;

    printf("Nhap diem: ");
    scanf("%f", &diem);

    if (diem < 5) {
        printf("Yeu\n");
    } else if (diem < 7) {
        printf("TB\n");
    } else if (diem < 8) {
        printf("Kha\n");
    } else if (diem < 9) {
        printf("Gioi\n");
    } else if (diem <= 10) {
        printf("Xuat sac\n");
    } else {
        printf("Diem khong hop le\n");
    }

    return 0;
}
