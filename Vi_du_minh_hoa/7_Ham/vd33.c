#include <stdio.h>

void nhap_mang(int *, int);
void xuat_mang(int *, int);
int so_lon_nhat(int *, int);
void sap_xep(int *, int);

void main()
{
	int a[20];
	int n;
	
	printf("Nhap so phan tu n = ");
	scanf("%d", &n);
	
	nhap_mang(a, n);
	
	printf("Mang vua nhap: \n");
	xuat_mang(a, n);
	
	printf("So lon nhat trong mang: %d\n", so_lon_nhat(a, n));
	
	sap_xep(a, n);
	printf("Mang sau khi sap xep: \n");
	xuat_mang(a, n);
}

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
		printf("%d ", a[i]);
	printf("\n");
}

int so_lon_nhat(int *a, int n)
{
	int max = a[0];
	int i;
	for (i = 1; i < n; i++)
		if (max < a[i])
			max = a[i];
	return max;
}

void sap_xep(int *a, int n)
{
	int tmp;
	int i, j;
	
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
}
