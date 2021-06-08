#include <stdio.h>

// Nhap vao 1 day so co nhieu hon 10 phan tu
// In ra man hinh 5 gia tri nho nhat va 5 gia tri lon nhat

int main()
{
	int a[100], tmp;
	int n, i, j;
	
	// Nhap du lieu cho mang
	do 
	{
		printf("Nhap so phan tu: ");
		scanf("%d", &n);	
		if (n < 10)
			printf("So phan tu can lon hon 10.\n");
	}
	while (n < 10);
	
	for (i = 0; i < n; i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	// Sap xep mang
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
	
	printf("5 phan tu nho nhat la:\n");
	for (i = 0; i < 5; i++)
		printf("%5d", a[i]);
	printf("\n");
	printf("5 phan tu lon nhat la:\n");
	for (i = n - 1; i >= n - 5; i--)
		printf("%5d", a[i]);
		
	return 0;
}
