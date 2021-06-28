#include <stdio.h>

// Viet ham tim USCLN

int uscln(int a, int b)
{
	if (a == b) return a;
	if (a > b)
		return uscln(a - b, b);
	else
		return uscln(a, b - a);
}

void main()
{
	int a, b;
	printf("Nhap a va b: ");
	scanf("%d%d", &a, &b);
	printf("USCLN cua %d va %d la: %d\n", a, b, uscln(a, b));
}
