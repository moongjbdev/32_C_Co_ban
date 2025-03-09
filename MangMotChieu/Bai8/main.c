#include <stdio.h>

void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) merged[k++] = arr1[i++];
    while (j < n2) merged[k++] = arr2[j++];
}

int main() {
    int n1, n2;
    
    printf("Nhap so phan tu mang 1: ");
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Nhap so phan tu mang 2: ");
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int merged[n1 + n2];
    mergeSortedArrays(arr1, n1, arr2, n2, merged);

    printf("Mang gop: ");
    for (int i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
