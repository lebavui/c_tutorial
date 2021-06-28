#include <stdio.h>

// Viet ham tinh dien tich va chu vi hinh tron

#define PI 3.1415926

float chu_vi(float r)
{
	return 2 * r * PI;
}

float dien_tich(float r)
{
	return r * r * PI;
}

void main()
{
	float r, s, c;
	
	printf("Nhap ban kinh r = ");
	scanf("%f", &r);
	
	c = chu_vi(r);
	s = dien_tich(r);
	
	printf("Chu vi duong tron ban kinh %f la %f\n", r, c);
	printf("Dien tich duong tron ban kinh %f la %f\n", r, s);
}
