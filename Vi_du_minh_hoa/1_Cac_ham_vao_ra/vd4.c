#include <stdio.h>

void main()
{
	// Viet chuong trinh nhap nguyen n co 3 chu so
	// In ra man hinh gia tri n theo chieu nguoc lai
	
	int n;
	int a, b, c;
	
	printf("Nhap so nguyen duong co 3 chu so n: ");
	scanf("%d", &n);
	
	c = n % 10;
	b = n / 10 % 10;
	a = n / 100 % 10;
	
	printf("So %d viet theo chieu nguoc lai la: %d%d%d", n, c, b, a);
}
