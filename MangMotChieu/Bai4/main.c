#include <stdio.h>

int main() {
    int n, max, min, posMax, posMin;
    
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    posMax = posMin = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            posMax = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            posMin = i;
        }
    }

    printf("Max: %d tai vi tri %d\n", max, posMax);
    printf("Min: %d tai vi tri %d\n", min, posMin);

    return 0;
}
