#include <stdio.h>

int main() {
    int m, n;
    printf("Nhập số dòng và số cột của ma trận: ");
    scanf("%d%d", &m, &n);

    int a[m][n], b[m][n], sum[m][n];
    int *pa = &a[0][0];
    int *pb = &b[0][0];
    int *ps = &sum[0][0];

    printf("Nhập ma trận A:\n");
    for (int i = 0; i < m * n; i++) {
        scanf("%d", pa + i);
    }

    printf("Nhập ma trận B:\n");
    for (int i = 0; i < m * n; i++) {
        scanf("%d", pb + i);
    }

    for (int i = 0; i < m * n; i++) {
        *(ps + i) = *(pa + i) + *(pb + i);
    }

    printf("Tổng hai ma trận:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
