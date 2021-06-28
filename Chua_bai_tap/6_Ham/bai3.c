#include <stdio.h>

// Viet ham nhap xuat mang a

void nhap_mang(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%5d", a[i]);
}

void main()
{
	int a[100], n;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	nhap_mang(a, n);
	
	printf("Mang vua nhap la: \n");
	xuat_mang(a, n);
}
