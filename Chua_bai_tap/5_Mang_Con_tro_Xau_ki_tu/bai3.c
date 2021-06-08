#include <stdio.h>

// Nhap day so, dem bo 3 so thoa man dieu kien x[i] = (x[i-1]+x[i+1])/2

int main()
{
	float x[100];
	int n, i, d;
	
	// Nhap du lieu cho mang
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Nhap x[%d]: ", i);
		scanf("%f", &x[i]);
	}
	
	d = 0;
	for (i = 1; i < n - 1; i++)
		if (x[i] = (x[i-1] + x[i+1]) / 2)
			d++;
	
	printf("Co %d bo 3 so thoa man dieu kien.", d);
	
	return 0;
}
