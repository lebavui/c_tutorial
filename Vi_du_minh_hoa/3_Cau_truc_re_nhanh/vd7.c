#include <stdio.h>

void main()
{
	// Giai phuong trinh bac nhat
	
	float a, b;
	float x;
	
	printf("Nhap he so a va b: ");
	scanf("%f%f", &a, &b);
	
	if (a == 0)
	{
		if (b == 0)
			printf("Phuong trinh co vo so nghiem.");
		else
			printf("Phuong trinh vo nghiem.");
	}
	else
	{
		x = -b / a;
		printf("Phuong trinh co nghiem x = %.2f", x);
	}
}
