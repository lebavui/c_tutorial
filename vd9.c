#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap vao 3 so a, b, c
	// Kiem tra a, b, c co phai la 3 canh cua tam giac khong
	// Neu la tam giac thi la loai gi
	
	float a, b, c;
	
	printf("Nhap he so a, b va c: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("Day la 3 canh cua tam giac.\n");
		if (a == b && b == c)
			printf("Day la tam giac deu.");
		else if (a == b || b == c || a == c)
			printf("Day la tam giac can.");
		if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
			printf("Day la tam giac vuong.");
	}
	else
		printf("Day khong phai la 3 canh cua tam giac.");
}
