#include <stdio.h>

// Lap trinh nhap vao so nguyen duong N.
// In ra man hinh day so Fibonaci nho hon N.

int main()
{
	int n, f1, f2, f;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Day so Fibonaci:\n");
	f2 = 1;
	f1 = 1;
	f = f1 + f2;
	printf("1 1 ");
	while (f < n)
	{
		printf("%d ", f);
		f2 = f1;
		f1 = f;
		f = f1 + f2;		
	}
	
	return 0;
}
