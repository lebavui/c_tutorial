#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap vao mot nam bat ky
	// Kiem tra nam do co phai la nam nhuan khong
	
	int year;
	
	printf("Nhap nam bat ky (so nguyen > 0): ");
	scanf("%d", &year);
	
	if (year % 4 != 0)
		printf("Day khong phai la nam nhuan.");
	else if (year % 100 != 0)
		printf("Day la nam nhuan");
	else if (year % 400 != 0)
		printf("Day khong phai la nam nhuan.");
	else
		printf("Day la nam nhuan");
}
