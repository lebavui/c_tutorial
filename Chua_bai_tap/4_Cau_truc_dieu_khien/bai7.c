#include <stdio.h>

// Lap trinh nhap 2 so nguyen a va b.
// In ra USCLN va BSCNN cua a va b.

int main()
{
	int a, b, ta, tb;
	
	printf("Nhap a va b: ");
	scanf("%d%d", &a, &b);
	
	ta = a;
	tb = b;
	
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	
	printf("USCLN cua %d va %d la: %d\n", ta, tb, a);
	printf("BSCNN cua %d va %d la: %d\n", ta, tb, ta * tb / a);
}
