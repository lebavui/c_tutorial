#include <stdio.h>

// Lap trinh nhap day so cho toi khi gap so duong chia het cho 5.
// Tim so lon nhat cua day so va so lan xuat hien cac gia tri do.

int main()
{
	int d, max, c;
	
	max = 0x80000000; // So nguyen nho nhat
	do
	{
		printf("Nhap so nguyen: (so duong chia het cho 5 thi dung): ");
		scanf("%d", &d);
		if (d > max)
		{
			max = d;
			c = 1;
		}
		else if (d == max)
			c++;
	} while (d % 5 != 0 || d < 0);
	
	printf("So lon nhat la %d xuat hien %d lan.", max, c);
	
	return 0;
}
