#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float p, S;

    printf("Nhap canh a: ");
    scanf("%f", &a);
    printf("Nhap canh b: ");
    scanf("%f", &b);
    printf("Nhap canh c: ");
    scanf("%f", &c);

    if (a + b > c && b + c > a && a + c > b) {
        printf("Ba canh tao thanh tam giac\n");

        if (a == b && b == c) {
            printf("Day la tam giac deu\n");
        } else if (a == b || b == c || a == c) {
            if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
                printf("Day la tam giac vuong can\n");
            } else {
                printf("Day la tam giac can\n");
            }
        } else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) {
            printf("Day la tam giac vuong\n");
        } else {
            printf("Day la tam giac thuong\n");
        }

        // Tính diện tích và chu vi
        p = (a + b + c)/2;  // nửa chu vi
        S = sqrt(p*(p-a)*(p-b)*(p-c));  // diện tích theo công thức Heron

        printf("Chu vi tam giac: %.2f\n", 2*p);
        printf("Dien tich tam giac: %.2f\n", S);
    } else {
        printf("Ba canh khong tao thanh tam giac\n");
    }

    return 0;
}
