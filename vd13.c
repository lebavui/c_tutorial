#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap 2 so nguyen a va b
	// In ra man hinh uoc so chung lon nhat va boi so chung nho nhat
	
	int a, b, i;
	int min, max;
	
	printf("Nhap a va b: ");
	scanf("%d%d", &a, &b);
	
	min = a > b ? b : a;
	max = a > b ? a : b;
	
	// Tim USCLN
	for (i = min; i >= 1; i--)
		if (a % i == 0 && b % i == 0)
			break;
	
	printf("Uoc so chung lon nhat la: %d\n", i);
	
	// Tim BSCNN
	for (i = max; i <= a * b; i++)
		if (i % a == 0 && i % b == 0)
			break;
	
	printf("Boi so chung nho nhat la: %d\n", i);
}
