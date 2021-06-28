#include <stdio.h>

// Viet ham de quy tinh X^n

float ham_mu(float x, int n)
{
	if (n == 0)
		return 1;
	else
		return x * ham_mu(x, n - 1);
}

void main()
{
	float x;
	int n;
	printf("Nhap x = ");
	scanf("%f", &x);
	printf("Nhap n = ");
	scanf("%d", &n);
	
	printf("%f^%d=%f", x, n, ham_mu(x, n));
}
