#include <stdio.h>

// Viet ham sap xep mang

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

// m la che do sap xep
// m == 0 => sap xep giam dan
// m != 0 => sap xep tang dan

void sap_xep(int *a, int n, int m)
{
	int i, j;
	int temp;
	
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if ((m && a[i] > a[j]) || (!m && a[i] < a[j]))
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

void main()
{
	int a[100], n;
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	nhap_mang(a, n);
	
	printf("Mang sap xep tang dan:\n");
	sap_xep(a, n, 1);
	xuat_mang(a, n);
	
	printf("\nMang sap xep giam dan:\n");
	sap_xep(a, n, 0);
	xuat_mang(a, n);
}	
