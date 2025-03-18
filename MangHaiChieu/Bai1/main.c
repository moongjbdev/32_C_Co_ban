#include <stdio.h>

int main()
{
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3];

    printf("\nMảng được khai báo sẵn:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\nNhập giá trị cho mảng 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\nMảng sau khi nhập:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
