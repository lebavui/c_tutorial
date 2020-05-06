#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap mang co n phan tu 
	// Xoa cac so chan khoi mang
	
	int n, i, j;
	int a[20];
	
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	for (i = n - 1; i >= 0; i--)
		if (a[i] % 2 == 0)
		{
			if (i < n - 1)
				for (j = i; j < n - 1; j++)
					a[j] = a[j + 1];
			n--;
		}
	
	printf("Mang sau khi xoa cac so chan: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
