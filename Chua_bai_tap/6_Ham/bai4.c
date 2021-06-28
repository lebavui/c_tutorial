#include <stdio.h>

// Viet ham tim so lon nhat trong mang

void nhap_mang(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%5d", a[i]);
}

int so_lon_nhat(int *a, int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}

void main()
{
	int a[100], n;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	nhap_mang(a, n);
	
	printf("So lon nhat cua mang la: %d\n", so_lon_nhat(a, n));
}
