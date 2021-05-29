#include <stdio.h>

// Lap trinh nhap 2 so a va b.
// Tinh x va y theo cong thuc.

int main()
{
	float a, b;
	float x, y;
	
	printf("Nhap a va b: ");
	scanf("%f%f", &a, &b);
	
	if (a < b)
		x = (a + b) / 3;
	else if (a == b)
		x = 1.5172;
	else
		x = (a - b) / (a * a + b * b);
	
	y = 15 * x * x + x + 7.2;
	
	printf("x = %f\n", x);
	printf("y = %f\n", y);
	
	return 0;
}
