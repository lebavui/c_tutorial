#include <stdio.h>

int kiemtra(int);	// Ham tra ve 1 neu la so nguyen to, tra ve 0 neu khong phai

void main()
{
	int p;
	
	printf("Nhap so nguyen p = ");
	scanf("%d", &p);
	
	if (kiemtra(p))
		printf("%d la so nguyen to", p);
	else
		printf("%d khong phai la so nguyen to", p);
}

int kiemtra(int p)
{
	int flag = 1;
	int i;
	for (i = 2; i*i <= p; i++)
		if (p % i == 0)
		{
			flag = 0;
			break;
		}
	return flag == 1 ? 1 : 0;
}
