#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct HangHoa {
    char ten[50];
    int donGia;
    int soLuong;
    int thanhTien;
    struct HangHoa* next;
} HangHoa;

// add
void themHang(HangHoa** head, char ten[], int donGia, int soLuong) {
    HangHoa* newHang = (HangHoa*)malloc(sizeof(HangHoa));
    strcpy(newHang->ten, ten);
    newHang->donGia = donGia;
    newHang->soLuong = soLuong;
    newHang->thanhTien = donGia * soLuong;
    newHang->next = NULL;

    if (*head == NULL || strcmp((*head)->ten, ten) > 0) {
        newHang->next = *head;
        *head = newHang;
        return;
    }

    HangHoa* temp = *head;
    while (temp->next != NULL && strcmp(temp->next->ten, ten) < 0) {
        temp = temp->next;
    }

    newHang->next = temp->next;
    temp->next = newHang;
}
// display
void hienThiDanhSach(HangHoa* head) {
    int tongTien = 0, stt = 1;
    printf("STT\tTen Hang\tDon gia\tSo luong\tThanh tien\n");
    while (head != NULL) {
        printf("%d\t%s\t\t%d\t%d\t\t%d\n", stt++, head->ten, head->donGia, head->soLuong, head->thanhTien);
        tongTien += head->thanhTien;
        head = head->next;
    }
    printf("Tong tien: %d\n", tongTien);
}

// main
int main() {
    HangHoa* danhSach = NULL;
    int n;
    char ten[50];
    int donGia, soLuong;

    printf("Nhap so mat hang: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Nhap ten hang: ");
        gets(ten);
        printf("Nhap don gia: ");
        scanf("%d", &donGia);
        printf("Nhap so luong: ");
        scanf("%d", &soLuong);
        getchar();

        themHang(&danhSach, ten, donGia, soLuong);
    }

    printf("\nSO LIEU BAN HANG\n");
    hienThiDanhSach(danhSach);

    return 0;
}
