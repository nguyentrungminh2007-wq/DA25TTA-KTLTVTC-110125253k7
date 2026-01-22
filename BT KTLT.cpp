#include <stdio.h>

int main() 
{
    int n;
    int a[50][50];
    int i, j;

    // Nhap n
    printf("Nhap n (n > 0): ");
    scanf("%d", &n);

    // Nhap ma tran
    printf("Nhap ma tran:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Xuat ma tran
    printf("\nMa tran vua nhap:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    // Khoi tao
    long long tich = 1;
    int demAm = 0;
    int max = a[0][0];
    int min = a[0][0];
    int toanDuong = 1;

    // Duyet ma tran
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            // Tinh tich
            tich = tich * a[i][j];

            // Dem so am
            if (a[i][j] < 0)
                demAm++;

            // Tim max
            if (a[i][j] > max)
                max = a[i][j];

            // Tim min
            if (a[i][j] < min)
                min = a[i][j];

            // Kiem tra toan so duong
            if (a[i][j] <= 0)
                toanDuong = 0;
        }
    }

    // In ket qua
    printf("\nTich cac phan tu = %lld", tich);
    printf("\nSo luong so am = %d", demAm);
    printf("\nGia tri lon nhat = %d", max);
    printf("\nGia tri nho nhat = %d", min);

    if (toanDuong == 1)
        printf("\nMa tran toan so duong");
    else
        printf("\nMa tran KHONG toan so duong");

    // Tim x
    int x;
    int demx = 0;

    printf("\nNhap gia tri x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] == x) {
                printf("\nVi tri x xuat hien: [%d,%d]", i + 1, j + 1);
                demx++;
            }
        }
    }

    if (demx == 0)
        printf("\nKhong co gia tri x=%d tren ma tran", x);

    return 0;
}

