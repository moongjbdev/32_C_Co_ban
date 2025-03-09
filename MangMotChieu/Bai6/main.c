#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    printf("Mang sau khi thay doi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
