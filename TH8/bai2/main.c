#include <stdio.h>

#define CITIES 5
#define YEARS 5

// Hàm tìm giá trị lớn nhất
float findMax(float arr[], int n) {
    float max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

// Hàm tìm giá trị nhỏ nhất
float findMin(float arr[], int n) {
    float min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int main() {
    float temp[CITIES][YEARS];

    // Nhập nhiệt độ
    for (int i = 0; i < CITIES; i++) {
        printf("Nhap nhiet do trung binh cua thanh pho %d trong 5 nam:\n", i + 1);
        for (int j = 0; j < YEARS; j++) {
            printf("Nam %d: ", j + 1);
            scanf("%f", &temp[i][j]);
        }
    }

    // Tìm và hiển thị nhiệt độ lớn nhất và nhỏ nhất
    for (int i = 0; i < CITIES; i++) {
        float max = findMax(temp[i], YEARS);
        float min = findMin(temp[i], YEARS);
        printf("Thanh pho %d: Nhiet do cao nhat = %.2f, thap nhat = %.2f\n", i + 1, max, min);
    }

    return 0;
}
