#include <stdio.h>

// Viet ham kiem tra so nguyen to

int is_prime(int n)
{
	int i;
	if (n <= 1) return 0;
	for (i = 2; i*i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}

void main()
{
	int n;
	
	printf("Nhap so nguyen n = ");
	scanf("%d", &n);
	if (is_prime(n))
		printf("%d la so nguyen to\n", n);
	else
		printf("%d khong phai la so nguyen to\n", n);
}
