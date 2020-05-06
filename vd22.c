#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap mang co n phan tu 
	// Chuyen cac so le len dau day, so chan ve cuoi day
	
	int n, i, j;
	int a[20], tmp;
	
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] % 2 == 0 && a[j] % 2 == 1)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			
	printf("Mang sau khi sap xep: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
