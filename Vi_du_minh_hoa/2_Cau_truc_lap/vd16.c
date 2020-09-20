#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap cac so nguyen tu ban phim cho den khi nhan 0 thi ket thuc
	// Tinh tong cac so chan va tong cac so le
	
	int n, s_chan, s_le;
	
	s_chan = 0;
	s_le = 0;
	
	do 
	{
		printf("Nhap so nguyen n (nhap 0 de ket thuc): ");
		scanf("%d", &n);
		
		if (n % 2 == 0)
			s_chan += n;
		else
			s_le += n;
	}
	while (n != 0);
	
	printf("Tong cac so chan: %d\n", s_chan);
	printf("Tong cac so le: %d\n", s_le);
}
