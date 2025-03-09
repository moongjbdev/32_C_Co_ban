#include <stdio.h>

int main() {
    int n, sum = 0, sumPos = 0, sumNeg = 0, countPos = 0, countNeg = 0;
    float avg, avgPos, avgNeg;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);

        sum += arr[i];
        if (arr[i] > 0) {
            sumPos += arr[i];
            countPos++;
        } else if (arr[i] < 0) {
            sumNeg += arr[i];
            countNeg++;
        }
    }

    avg = (float)sum / n;
    avgPos = countPos ? (float)sumPos / countPos : 0;
    avgNeg = countNeg ? (float)sumNeg / countNeg : 0;

    printf("Tong tat ca: %d\nTong so duong: %d\nTong so am: %d\n", sum, sumPos, sumNeg);
    printf("TBC ca mang: %.2f\nTBC so duong: %.2f\nTBC so am: %.2f\n", avg, avgPos, avgNeg);

    return 0;
}
