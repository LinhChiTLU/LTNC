#include <stdio.h>

int main(void) {
    // Khai b�o bi?n
    int  a;
    float x;
    char ch;
    char str[30];

    // Nh?p d? li?u
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &a);

    printf("\nNhap vao mot so thuc: ");
    scanf("%f", &x);

    // X�a b? nh? �?m tr�?c khi �?c k? t?
    fflush(stdin);

    printf("\nNhap vao mot ki tu: ");
    scanf("%c", &ch);

    // X�a b? nh? �?m tr�?c khi �?c x�u
    fflush(stdin);

    printf("\nNhap vao mot xau ki tu: ");
    gets(str);   // L�u ?: gets() s? �?c c? kho?ng tr?ng, nh�ng kh�ng an to�n

    // Hi?n th? l?i
    printf("\n\nNhung du lieu vua nhap vao:");
    printf("\n  So nguyen:      %d",    a);
    printf("\n  So thuc:        %5.2f", x);
    printf("\n  Ky tu:          %c",    ch);
    printf("\n  Xau ky tu:      %s\n",  str);

    return 0;
}

