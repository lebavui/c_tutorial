#include <stdio.h>

#define PI 3.14

float chuvi(float);
float dientich(float);

void main()
{
	float r;
	
	printf("Nhap ban kinh r = ");
	scanf("%f", &r);
	
	printf("Chu vi hinh tron: %.2f\n", chuvi(r));
	printf("Dien tich hinh tron: %.2f\n", dientich(r));
}

float chuvi(float r)
{
	return 2 * r * PI;
}

float dientich(float r)
{
	return r * r * PI;
}
