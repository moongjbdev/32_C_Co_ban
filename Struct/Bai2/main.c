#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SinhVien {
    char hoTen[50];
    int tuoi;
    float diemTB;
    struct SinhVien* next;
} SinhVien;

// add
void themSinhVien(SinhVien** head, char hoTen[], int tuoi, float diemTB) {
    SinhVien* newSV = (SinhVien*)malloc(sizeof(SinhVien));
    strcpy(newSV->hoTen, hoTen);
    newSV->tuoi = tuoi;
    newSV->diemTB = diemTB;
    newSV->next = *head;
    *head = newSV;
}

// display
void hienThiDanhSach(SinhVien* head) {
    int stt = 1;
    printf("STT\tHo ten\t\tTuoi\tDiem TB\n");
    while (head != NULL) {
        printf("%d\t%s\t%d\t%.2f\n", stt++, head->hoTen, head->tuoi, head->diemTB);
        head = head->next;
    }
}

//
void chenSinhVien(SinhVien** head, char tenCanChen[], char hoTen[], int tuoi, float diemTB) {
    SinhVien* newSV = (SinhVien*)malloc(sizeof(SinhVien));
    strcpy(newSV->hoTen, hoTen);
    newSV->tuoi = tuoi;
    newSV->diemTB = diemTB;

    if (*head == NULL || strcmp((*head)->hoTen, tenCanChen) == 0) {
        newSV->next = *head;
        *head = newSV;
        return;
    }

    SinhVien* temp = *head;
    while (temp->next != NULL && strcmp(temp->next->hoTen, tenCanChen) != 0) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Khong tim thay sinh vien can chen truoc!\n");
        free(newSV);
        return;
    }

    newSV->next = temp->next;
    temp->next = newSV;
}

// remove
void xoaSinhVien(SinhVien** head, char hoTen[]) {
    SinhVien* temp = *head, *prev = NULL;

    while (temp != NULL && strcmp(temp->hoTen, hoTen) == 0) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && strcmp(temp->hoTen, hoTen) != 0) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Khong tim thay sinh vien can xoa!\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// main
int main() {
    SinhVien* danhSach = NULL;
    int luaChon, tuoi;
    float diemTB;
    char hoTen[50], tenCanChen[50];

    do {
        printf("\n1. Them sinh vien\n2. Hien thi danh sach\n3. Chen sinh vien\n4. Xoa sinh vien\n5. Thoat\nChon: ");
        scanf("%d", &luaChon);
        getchar();

        switch (luaChon) {
            case 1:
                printf("Nhap ho ten: ");
                gets(hoTen);
                printf("Nhap tuoi: ");
                scanf("%d", &tuoi);
                printf("Nhap diem TB: ");
                scanf("%f", &diemTB);
                getchar();
                themSinhVien(&danhSach, hoTen, tuoi, diemTB);
                break;
            case 2:
                hienThiDanhSach(danhSach);
                break;
            case 3:
                printf("Nhap ten sinh vien can chen truoc: ");
                gets(tenCanChen);
                printf("Nhap ho ten moi: ");
                gets(hoTen);
                printf("Nhap tuoi: ");
                scanf("%d", &tuoi);
                printf("Nhap diem TB: ");
                scanf("%f", &diemTB);
                getchar();
                chenSinhVien(&danhSach, tenCanChen, hoTen, tuoi, diemTB);
                break;
            case 4:
                printf("Nhap ten sinh vien can xoa: ");
                gets(hoTen);
                xoaSinhVien(&danhSach, hoTen);
                break;
        }
    } while (luaChon != 5);

    return 0;
}
