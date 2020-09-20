#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap so nguyen n
	// In ra man hinh cac so fibonaci nho hon n
	
	int n, f1, f2, f;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Cac so fibonaci nho hon %d la:\n", n);
	
	f1 = 1;
	f2 = 1;
	
	printf("%d %d ", f1, f2);
	
	while (f1 + f2 < n)
	{
		f = f1 + f2;
		printf("%d ", f);
		f2 = f1;
		f1 = f;
	}
}
