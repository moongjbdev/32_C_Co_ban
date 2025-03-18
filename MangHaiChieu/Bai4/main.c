#include <stdio.h>

int main() {
    int n;
    printf("Nhập số nguyên dương n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui lòng nhập số nguyên dương lớn hơn 0.\n");
        return 1;
    }

    int mat[n][n];
    int num = 1, hangDau = 0, hangCuoi = n - 1, cotDau = 0, cotCuoi = n - 1;

    while (num <= n * n) {
        for (int i = cotDau; i <= cotCuoi; i++) mat[hangDau][i] = num++;
        hangDau++;

        for (int i = hangDau; i <= hangCuoi; i++) mat[i][cotCuoi] = num++;
        cotCuoi--;

        for (int i = cotCuoi; i >= cotDau; i--) mat[hangCuoi][i] = num++;
        hangCuoi--;

        for (int i = hangCuoi; i >= hangDau; i--) mat[i][cotDau] = num++;
        cotDau++;
    }

    // In ma trận xoáy
    printf("Ma trận xoáy %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
