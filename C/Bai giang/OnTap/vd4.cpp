#include <stdio.h>

int main(void) {
    // Khai báo bi?n
    int  a;
    float x;
    char ch;
    char str[30];

    // Nh?p d? li?u
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &a);

    printf("\nNhap vao mot so thuc: ");
    scanf("%f", &x);

    // Xóa b? nh? ð?m trý?c khi ð?c k? t?
    fflush(stdin);

    printf("\nNhap vao mot ki tu: ");
    scanf("%c", &ch);

    // Xóa b? nh? ð?m trý?c khi ð?c xâu
    fflush(stdin);

    printf("\nNhap vao mot xau ki tu: ");
    gets(str);   // Lýu ?: gets() s? ð?c c? kho?ng tr?ng, nhýng không an toàn

    // Hi?n th? l?i
    printf("\n\nNhung du lieu vua nhap vao:");
    printf("\n  So nguyen:      %d",    a);
    printf("\n  So thuc:        %5.2f", x);
    printf("\n  Ky tu:          %c",    ch);
    printf("\n  Xau ky tu:      %s\n",  str);

    return 0;
}

