#include <stdio.h>
#include <math.h>

// Tinh tong vo han

int main()
{
	float u, s1, s2, s3;
	float x, eps;
	int i;
	
	printf("Nhap x: ");
	scanf("%f", &x);
	
	printf("Nhap eps: ");
	scanf("%f", &eps);
	
	s1 = 0;
	u = 1;
	i = 0; 
	while (fabs(u) > eps)
	{
		s1 += u;
		i++;
		u = -u * x / i;
	}
	
	s2 = 0;
	u = x;
	i = 0; 
	while (fabs(u) > eps)
	{
		s2 += u;
		i++;
		u = -u * x * x / ((2 * i) * (2 * i + 1));
	}
	
	s3 = 0;
	u = 1;
	i = 0; 
	while (fabs(u) > eps)
	{
		s3 += u;
		i++;
		u = -u * x * x / ((2 * i) * (2 * i - 1));
	}
	
	printf("S1 = %f\n", s1);
	printf("S2 = %f\n", s2);
	printf("S3 = %f\n", s3);
	
	return 0;
}
