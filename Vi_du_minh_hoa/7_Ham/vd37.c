#include <stdio.h>

int uscln(int, int);

void main()
{
	int a, b;
	
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	
	printf("USCLN(%d, %d) = %d", a, b, uscln(a, b));
}

int uscln(int a, int b)
{
	if (a == b)
		return a;
	if (a > b)
		return uscln(a - b, b);
	return uscln(a, b - a);
}
