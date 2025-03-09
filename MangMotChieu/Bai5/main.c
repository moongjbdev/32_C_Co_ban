#include <stdio.h>

int main() {
    int n, x, count = 0;
    
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    printf("Gia tri %d xuat hien %d lan\n", x, count);
    return 0;
}
