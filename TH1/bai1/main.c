#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, perimeter;

    printf("Nhap ban kinh cua vong tron: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    printf("Dien tich hinh tron: %.2f\n", area);
    printf("Chu vi hinh tron: %.2f\n", perimeter);

    return 0;
}
