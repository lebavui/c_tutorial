#include <stdio.h>

// Nhap vao day so va dua ra man hinh:
// + Tong va tich cua day so
// + Cac so chia het cho 3 va lon hon 10
// + Dem cac so nam trong doan [100, 1000]

int main()
{
	int a[100], n, i;
	int s, p, d;
	
	// Nhap du lieu cho mang
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	// Tinh tong va tich
	s = 0;
	p = 1;
	for (i = 0; i < n; i++)
	{
		s += a[i];
		p *= a[i];
	}
	
	printf("Tong cac phan tu la: %d\n", s);
	printf("Tich cac phan tu la: %d\n", p);
	
	// In ra man hinh cac so chia het cho 3 va lon hon 10
	printf("Cac so chia het cho 3 va lon hon 10: \n");
	for (i = 0; i < n; i++)
		if (a[i] % 3 == 0 && a[i] > 10)
			printf("%5d", a[i]);
	printf("\n");
	
	// Dem cac so nam trong doan [100, 1000]
	d = 0;
	for (i = 0; i < n; i++)
		if (a[i] >= 100 && a[i] <= 1000)
			d++;
	printf("Co %d so nam trong doan [100, 1000]", d);
	
	return 0;
}
