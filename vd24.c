#include <stdio.h>
#include <math.h>

void main()
{
	// Nhap mang co n phan tu theo thu tu tang dan
	// Nhap so x va chen vao dung vi tri
	
	int n, i, j;
	int a[20], x;
	
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Nhap x: ");
	scanf("%d", &x);
	
	for (i = 0; i < n; i++)
		if (a[i] > x)
			break;
			
	if (i < n - 1)
		for (j = n - 1; j >= i; j--)
			a[j + 1] = a[j];
	n++;
	
	a[i] = x;	
		
	printf("Mang sau khi sap xep: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
