#include<stdio.h>
int main()
{
	int a[50][50];
	int m;
	do
	{
		printf("nhap vao so dong va cot :");
		scanf("%d",&m);
	}
	while(m<=0);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		printf("\n");
		for(int j=0;j<m;j++)
		{
			printf(" %d ",a[i][j]);
		}
	}
	do
	{
		printf("nhap vao so nguyen r:");
		scanf("%d",&r);
	}
	while(r<=0||r>=m);
	int b=0;
	for(int j=0;j<m;j++)
	{
		b=b+a[r][j];
	}
	printf("tong cac phan tu tren dong r = %d",b);
	int d=1;
	do
	{
		printf("nhap vao so nguyen c:");
		scanf("%d",&c);
	}
	while(c<=0||r>=m);
	for(int i=0;i<m;i++)
	{
		d=d*a[i][c];
	}
	printf("tich cac phan tu tren cot c = %d",d);
	
