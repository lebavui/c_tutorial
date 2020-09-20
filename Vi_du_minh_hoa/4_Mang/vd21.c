#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap mang co n phan tu 
	// Kiem tra day so tang dan hoac giam dan
	
	int n, i, flag;
	float a[20];
	
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	// Kiem tra day tang dan
	flag = 1;
	for (i = 0; i < n - 1; i++)
		if (a[i] > a[i + 1])
		{
			flag = 0;
			break;
		}
		
	if (flag == 1)
		printf("Day la day tang dan.\n");
	else
		printf("Day khong phai la day tang dan.\n");

	// Kiem tra day giam dan
	flag = 1;
	for (i = 0; i < n - 1; i++)
		if (a[i] < a[i + 1])
		{
			flag = 0;
			break;
		}
		
	if (flag == 1)
		printf("Day la day giam dan.\n");
	else
		printf("Day khong phai la day giam dan.\n");
}
