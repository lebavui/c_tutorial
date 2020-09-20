#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap mang n phan tu
	// Tim phan tu (chi so, gia tri) co gia tri tuyet doi lon nhat
	
	int n, i;
	int a[20];
	int max, imax;
	
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	max = abs(a[0]);
	imax = 0;
	
	for (i = 1; i < n; i++)
		if (abs(a[i]) > max)
		{
			max = abs(a[i]);
			imax = i;
		}
		
	printf("Phan tu %d co gia tri tuyet doi lon nhat la %d", imax, max);
}
