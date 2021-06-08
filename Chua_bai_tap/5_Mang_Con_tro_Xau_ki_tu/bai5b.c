#include <stdio.h>
#include <math.h>

// Nhap vao 2 day so, tinh gia tri theo cong thuc

int main()
{
	float x[100], y[100];
	int n, i;
	float s1, s2;
	
	// Nhap du lieu cho mang
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Nhap x[%d]: ", i);
		scanf("%f", &x[i]);
		printf("Nhap y[%d]: ", i);
		scanf("%f", &y[i]);
	}
	
	s1 = 0;
	s2 = 0;
	for (i = 0; i < n; i++)
	{
		s1 += cos(x[i])*sin(y[i]);
		s2 += (x[i] - y[i]) * (x[i] - y[i]);	
	}
	s2 = sqrt(s2);
	
	printf("s1 = %f\n", s1);
	printf("s2 = %f\n", s2);
	
	return 0;
}
