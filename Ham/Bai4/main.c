#include <stdio.h>

#define MAX 10

void nhapMaTran(int a[MAX][MAX], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("Nhập phần tử a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void xuatMaTran(int a[MAX][MAX], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

void tongMaTran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void tichMaTran(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int hang1, int cot1, int cot2) {
    for (int i = 0; i < hang1; i++) {
        for (int j = 0; j < cot2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < cot1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int hang1, cot1, hang2, cot2;

    printf("Nhập số hàng và cột của ma trận A: ");
    scanf("%d %d", &hang1, &cot1);
    printf("Nhập số hàng và cột của ma trận B: ");
    scanf("%d %d", &hang2, &cot2);

    if (hang1 != hang2 || cot1 != cot2) {
        printf("Không thể cộng vì ma trận không cùng kích thước.\n");
    }
    if (cot1 != hang2) {
        printf("Không thể nhân vì số cột của A phải bằng số hàng của B.\n");
    }

    printf("Nhập ma trận A:\n");
    nhapMaTran(a, hang1, cot1);
    printf("Nhập ma trận B:\n");
    nhapMaTran(b, hang2, cot2);

    printf("Ma trận A:\n");
    xuatMaTran(a, hang1, cot1);
    printf("Ma trận B:\n");
    xuatMaTran(b, hang2, cot2);

    if (hang1 == hang2 && cot1 == cot2) {
        tongMaTran(a, b, c, hang1, cot1);
        printf("Tổng hai ma trận:\n");
        xuatMaTran(c, hang1, cot1);
    }

    if (cot1 == hang2) {
        tichMaTran(a, b, c, hang1, cot1, cot2);
        printf("Tích hai ma trận:\n");
        xuatMaTran(c, hang1, cot2);
    }

    return 0;
}
