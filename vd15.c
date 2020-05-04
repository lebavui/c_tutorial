#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap so nguyen n
	// Kiem tra xem n co phai la so hoan hao khong
	
	int n, s, i;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	s = 0;
	
	for (i = 1; i <= n / 2; i++)
		if (n % i == 0)
			s += i;
			
	if (s == n)
		printf("%d la so hoan hao.", n);
	else
		printf("%d khong phai la so hoan hao.", n);
}
