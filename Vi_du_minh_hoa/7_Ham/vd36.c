#include <stdio.h>

float x_mu_n(float, int);

void main()
{
	float x;
	int n;
	
	printf("Nhap x = ");
	scanf("%f", &x);
	printf("Nhap n = ");
	scanf("%d", &n);
	
	printf("%.2f ^ %d = %.2f", x, n, x_mu_n(x, n));
}

float x_mu_n(float x, int n)
{
	if (n == 0)
		return 1;
	
	return x * x_mu_n(x, n - 1);
}
