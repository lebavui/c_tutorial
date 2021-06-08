#include <stdio.h>

// Nhap vao 1 day so, in ra vi tri cac so nho nhat.

int main()
{
	int a[100], n, i;
	int min, imin;
	
	// Nhap du lieu cho mang
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	// Tim so nho nhat
	min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min)
			min = a[i];
		
	printf("Vi tri cac so nho nhat:\n");
	for (i = 0; i < n; i++)
		if (a[i] == min)
			printf("%5d", i);
	
	return 0;
}
