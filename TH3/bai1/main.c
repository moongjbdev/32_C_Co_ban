#include <stdio.h>

int main() {
    int x = 2500, y = 300;

    if ((x < 2000 || x > 3000) && (y >= 100 && y <= 500)) {
        printf("x = %d\n", x);
        printf("y = %d\n", y);
    } else {
        printf("Điều kiện không thỏa mãn.\n");
    }

    return 0;
}

