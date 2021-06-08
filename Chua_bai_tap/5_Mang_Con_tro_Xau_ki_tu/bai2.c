#include <stdio.h>

// Nhap vao 1 day so, tim so chan nho nhat.

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
	
	min = a[0];
	imin = 0;
	for (i = 1; i < n; i++)
		if (a[i] < min && a[i] % 2 == 0)
		{
			min = a[i];
			imin = i;
		}
		
	printf("So chan nho nhat %d co chi so %d", min, imin);
	
	return 0;
}
