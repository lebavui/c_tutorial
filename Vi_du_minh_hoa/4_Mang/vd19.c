#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap mang co n phan tu 
	// Liet ke cac phan tu khac nhau trong mang
	
	int n, m, i, j;
	int a[20], b[20];
	
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	m = 0;
	
	// Duyet tung phan tu cua mang a
	// Kiem tra xem phan tu a[i] co xuat hien trong mang b khong
	// Neu khong xuat hien thi them phan tu a[i] vao mang b
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			if (a[i] == b[j]) break;
		if (j == m)
		{
			b[m] = a[i];
			m++;
		}
	}
	
	printf("Cac phan tu khac nhau la: ");
	for (i = 0; i < m; i++)
		printf("%d ", b[i]);
}
