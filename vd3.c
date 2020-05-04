#include <stdio.h>

void main()
{
	// Viet chuong trinh nhap 2 so nguyen a va n
	// In ra man hinh gia tri bit thu n cua a
	int a, n;
	int b;
	
	printf("Nhap so nguyen duong a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	
	b = (a & (1 << n)) ? 1 : 0;
	
	printf("Bit thu %d cua %d la: %d\n", n, a, b);
}
