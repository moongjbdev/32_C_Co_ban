#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Nhap lan luot 2 so 'a' va 'b'\n");
    scanf("%d %d", &a, &b);

    printf("Tong: %d + %d = %d\n", a, b, a + b);
    printf("Hieu: %d - %d = %d\n", a, b, a - b);
    printf("Tich: %d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("Thuong: %d / %d = %.2f\n", a, b, (float)a / b);
        if(a % b != 0){
            printf("a khong chia het cho b");
        }else {
            printf("a chia het cho b");
        }
    } else {
        printf("Khong the chia cho 0!\n");
    }
    return 0;
}
