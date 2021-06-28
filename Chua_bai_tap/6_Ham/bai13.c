#include <stdio.h>
#include <math.h>
#include <float.h>

float f(float x)
{
	if (fabs(x) < 2)
		return pow(4 - x * x, 1 / 3.0) + 1;
	else if (fabs(x) > 2)
		return exp(x * x * x + 1) + log(x * x - 1) / log(5);
	else 
		return 7;
}

void main()
{
	int n, i;
	float x, y, max;
	
	printf("Nhap n = ");
	scanf("%d", &n);
	
	max = FLT_MIN;
	printf("Nhap n so thuc:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%f", &x);
		y = f(x);
		printf("f(%f) = %f\n", x, y);
		if (max < y)
			max = y;
	}
	
	printf("Gia tri lon nhat cua ham: %f\n", max);
	
	printf("Nhap day so thuc:\n");
	n = 0;
	while (n < 100)
	{
		scanf("%f", &x);
		if (x > max)
			break;
		n++;
	}
}
