#include <stdio.h>

// Lap trinh nhap 3 so a, b, c.
// Kiem tra co phai la 3 canh cua tam giac khong.
// Neu dung thi la tam giac gi.

int main()
{
	float a, b, c;
	printf("Nhap 3 so a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a+b>c && a+c>b && b+c>a)
	{
		printf("Day la 3 canh cua tam giac.\n");
		if (a == b && a == c)
			printf("Day la tam giac deu.\n");
		else if (a == b || b == c || a == c)
			printf("Day la tam giac can.\n");
		
		if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) 
			printf("Day la tam giac vuong.\n");
	}
	else
		printf("Day khong phai la 3 canh cua tam giac.\n");
}
