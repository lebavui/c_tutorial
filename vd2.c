#include <stdio.h>

void main()
{
	// Viet chuong trinh tinh dien tich hinh thang
	float a, b, h;
	float s;
	
	printf("Nhap 2 canh day hinh thang: ");
	scanf("%f%f", &a, &b);
	printf("Nhap chieu cao hinh thang: ");
	scanf("%f", &h);
	
	s = h * (a + b) / 2;
	
	printf("Dien tich hinh thang la: %.2f\n", s);
}
