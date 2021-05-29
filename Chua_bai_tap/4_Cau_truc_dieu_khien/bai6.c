#include <stdio.h>

// Lap trinh nhap vao so nguyen duong N.
// In ra cac so nguyen to nho hon N.

int main()
{
	int n, i, j, flag;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if (n < 3)
		printf("Khong co so nguyen to nao nho hon %d.", n);
	else
	{
		printf("Cac so nguyen to nho hon %d la: ", n);
		for (i = 2; i < n; i++)
		{
			flag = 1;
			for (j = 2; j * j <= i; j++)
				if (i % j == 0)
				{
					flag = 0;
					break;
				}
			if (flag) printf("%d ", i);
		}
	}
	
	return 0;
}
