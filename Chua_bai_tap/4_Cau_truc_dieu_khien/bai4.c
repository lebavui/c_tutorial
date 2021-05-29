#include <stdio.h>

// Lap trinh nhap 1 nam bat ky.
// Kiem tra nam nhuan.

int main()
{
	int year;
	
	printf("Nhap nam: ");
	scanf("%d", &year);
	
	if (year % 4 != 0) 
		printf("Day khong phai la nam nhuan.");
	else if (year % 100 != 0)
		printf("Day la nam nhuan.");
	else if (year % 400 != 0) 
		printf("Day khong phai la nam nhuan.");
	else 
		printf("Day la nam nhuan.");
	
	return 0;
}
