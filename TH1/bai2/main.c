#include <stdio.h>

int main() {
    int age;
    float salary;

    printf("Nhap tuoi: ");
    scanf("%d", &age);

    printf("Nhap luong: ");
    scanf("%f", &salary);

    printf("Thong tin vua nhap:\n");
    printf("Tuoi: %d\n", age);
    printf("Luong: %.2f\n", salary);

    return 0;
}
