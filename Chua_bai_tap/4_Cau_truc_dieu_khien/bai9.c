#include <stdio.h>

// Lap trinh nhap vao so nguyen duong N.
// Kiem tra xem N co phai la so hoan hao khong.

int main()
{
	int n, i, s = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for (i = 1; i < n; i++)
		if (n % i == 0)
			s += i;
			
	if (s == n)
		printf("%d la so hoan hao.", n);
	else
		printf("%d khong phai la so hoan hao.", n);
}
