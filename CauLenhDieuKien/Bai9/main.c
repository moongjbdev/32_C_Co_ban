#include <stdio.h>

int main() {
    int thang, nam;

    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    switch(thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d nam %d co 31 ngay.\n", thang, nam);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d nam %d co 30 ngay.\n", thang, nam);
            break;
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
                printf("Thang 2 nam %d co 29 ngay (nam nhuan).\n", nam);
            } else {
                printf("Thang 2 nam %d co 28 ngay.\n", nam);
            }
            break;
        default:
            printf("Thang khong hop le!\n");
    }

    return 0;
}
