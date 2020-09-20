#include <stdio.h>
#include <math.h>

void main()
{
	// In tam giac hinh sao voi chieu cao nhap tu ban phim
	
	int n, i, j;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	// Tam giac vuong trai
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	
	// Tam giac vuong phai
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	
	// Tam giac can
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}
