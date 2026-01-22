//Bai 1:

#include <stdio.h>

// Ham tinh giai thua bang de quy
int TinhGiaithua(int n)
{
    if (n == 1)
        return 1;
    return n * TinhGiaithua(n - 1);
}

int main()
{
    int n;

    // Nhap so nguyen duong n
    do
    {
        printf("Nhap so nguyen duong n (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    // Tinh va xuat ket qua
    printf("%d!: %d", n, TinhGiaithua(n));

    return 0;
}

