#include <stdio.h>

// Lap trinh nhap vao cac so nguyen cho den khi gap so 0.
// Tinh trung binh cong cac so chan da duoc nhap.

int main()
{
	int s = 0, c = 0, d;
	
	do 
	{
		printf("Nhap so nguyen (0 de ket thuc): ");
		scanf("%d", &d);
		if (d == 0) break;
		if (d % 2 == 0)
		{
			s += d;
			c++;
		}
	}
	while (1);
	
	if (c == 0)
		printf("Khong co so chan nao duoc nhap.");
	else
		printf("Trung binh cong cac so chan: %f", (float)s/c);
	
	return 0;
}
