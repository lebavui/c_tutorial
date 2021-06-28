#include <stdio.h>
#include <math.h>

float f(float x)
{
	if (fabs(x) <= 2)
		return sqrt(exp(2 * x + 1) + 1) + 7;
	else
		return pow(x, 5) + 5 * pow(x, 3) + x + 1;
}

void main()
{
	float x, y, s;
	
	printf("Nhap so thuc x va y: ");
	scanf("%f%f", &x, &y);
	
	s = f(x) + f(y);
	printf("Gia tri can tinh la: %f\n", s * s);
	
	printf("Bang cac gia tri: \n");
	for (x = -5; x <= 3; x += 0.1)
		printf("%5.2f %7.2f\n", x, f(x));
}
