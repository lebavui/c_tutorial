#include <stdio.h>
#include <math.h>

// Tinh tong huu han

int main()
{
	int n, i;
	float x, u2, u3, u4;
	float s1, s2, s3, s4;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("Nhap x: ");
	scanf("%f", &x);
	
	s1 = 0;
	s2 = s3 = s4 = 1;
	u2 = u3 = u4 = 1;
	
	for (i = 1; i <= n; i++)
	{
		s1 = sqrt(x + s1);
		u2 = u2 * x;
		s2 = s2 + u2 / i;
		u3 = u3 * x / i;
		s3 = s3 + u3;
		u4 = -u4 * x / i;
		s4 = s4 + u4;
	}
	
	printf("S1 = %f\n", s1);
	printf("S2 = %f\n", s2);
	printf("S3 = %f\n", s3);
	printf("S4 = %f\n", s4);
}
