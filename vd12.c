#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap so nguyen n
	// In ra man hinh cac so nguyen to nho hon n
	
	int n, i, j, flag;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Cac so nguyen to nho hon %d la:\n", n);
	
	for (i = 2; i < n; i++)
	{
		flag = 1;
		for (j = 2; j <= sqrt(i); j++)
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		
		if (flag == 1)		
			printf("%d ", i);
	}
}
