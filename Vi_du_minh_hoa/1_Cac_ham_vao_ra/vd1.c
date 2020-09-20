#include <stdio.h>

#define PI 3.14

void main()
{
	// Viet chuong trinh tinh dien tich va chu vi hinh tron
	float r;
	float s, c;
	
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &r);
	
	c = 2 * r * PI;
	s = r * r * PI;
	
	printf("Chu vi hinh tron la: %.2f\n", c);
	printf("Dien tich hinh tron la: %.2f\n", s);
}
