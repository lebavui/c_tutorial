#include <stdio.h>
#include <math.h>

void main()
{
	// Giai phuong trinh bac hai
	
	float a, b, c;
	float delta;
	float x, x1, x2;
	
	printf("Nhap he so a, b va c: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
				printf("Phuong trinh co vo so nghiem.");
			else
				printf("Phuong trinh vo nghiem.");
		}
		else
		{
			x = -c / b;
			printf("Phuong trinh co nghiem x = %.2f.", x);
		}
	}
	else
	{
		delta = b * b - 4 * a * c;
		if (delta < 0)
			printf("Phuong trinh vo nghiem.");
		else if (delta == 0)
		{
			x = -b / (2 * a);
			printf("Phuong trinh co nghiem kep x = %.2f.", x);
		}
		else
		{
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem x1 = %.2f va x2 = %.2f.", x1, x2);
		}
	}
}
