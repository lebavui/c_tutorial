#include <stdio.h>

// Nhap mang n so thuc
// Ghi mang vao file van ban: dong dau luu so luong, cac dong tiep theo luu cac gia tri
// Doc tep van ban va luu vao mang
// Sap xep mang theo thu tu tang dan va luu vao file khac theo quy cach nhu tren

void main()
{
	float a[100], tmp;
	int n, i, j;
	FILE *f;
	
	// Nhap mang tu ban phim
	printf("Nhap so phan tu n = ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
	
	// Luu vao file
	f = fopen("c:\\test\\float.dat", "w");
	fprintf(f, "%d\n", n);
	for (i = 0; i < n; i++)
		fprintf(f, "%f\n", a[i]);
	fclose(f);
	
	// Doc noi dung tu file
	f = fopen("c:\\test\\float.dat", "r");
	fscanf(f, "%d", &n);
	for (i = 0; i < n; i++)
		fscanf(f, "%f", &a[i]);
	fclose(f);
	
	// Sap xep mang
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
	
	// Luu vao file
	f = fopen("c:\\test\\float_sx.dat", "w");
	fprintf(f, "%d\n", n);
	for (i = 0; i < n; i++)
		fprintf(f, "%f\n", a[i]);
	fclose(f);
}
