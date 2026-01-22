//Bai 4:

#include<stdio.h>

typedef struct HOCSINH
{
	char hoten[50];
	float diemtoan;
	float diemly;
	float diemhoa;
};

int main()
{
	HOCSINH hs1;
	float dtb, tam;
	
	//Nhap thong tin hs1
	printf("Nhap ho ten cua hs1: ");
	gets(hs1.hoten);
	printf("Nhap diem toan cua hs1: ");
	scanf("%f", &tam); hs1.diemtoan = tam;
	printf("Nhap diem ly cua hs1: ");
	scanf("%f", &tam); hs1.diemly = tam;
	printf("Nhap diem hoa cua hs1: ");
	scanf("%f", &tam); hs1.diemhoa = tam;
	
    //Xuat thong tin hs1
    printf("\n------XUAT THONG TIN HOC SINH hs1------\n");
    printf("\n Ho ten cua hs1: %s", hs1.hoten );
    printf("\n Diem toan cua hs1: %.2f", hs1.diemtoan);
    printf("\n Diem ly cua hs1: %.2f", hs1.diemly);
    printf("\n Diem hoa cua hs1: %.2f", hs1.diemhoa);
    
    //Tinh Diem Trung binh cua hs1
    dtb = (hs1.diemtoan+hs1.diemly+hs1.diemhoa)/3;
    printf("\n\n Diem Trung binh cua hs1= %.2f", dtb);
    
	return 0; 
}