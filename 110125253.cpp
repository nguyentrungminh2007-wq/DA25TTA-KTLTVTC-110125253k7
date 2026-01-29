#include<stdio.h>
int main()
{
	int a,b,tong,hieu,tich;
	float thuong;
	do
	{
		printf("\nnhap vao so nguyen a =");
		scanf("%d",&a);
	}
	while(a<=0);
		do
	{
		printf("\nnhap vao so nguyen b =");
		scanf("%d",&b);
	}
	while(b<=0);
	tong=a+b;
	hieu=a-b;
	tich=a*b;
	thuong=1.0*a/b;
	printf("\ntong cua 2 so nguyen a va b = %d",tong);
	printf("\nhieu cua 2 so nguyen a va b = %d",hieu);
	printf("\ntich cua 2 so nguyen a va b = %d",tich);
	printf("\nthuong cua 2 so nguyen a va b = %f",thuong);
	return 0;
}
