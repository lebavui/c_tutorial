#include <stdio.h>

void main()
{
	// Tinh xap xi so PI
	
	int i, d;
	float sum, e, x;
	
	printf("Nhap sai so epsilon: ") ;
	scanf("%f", &e);
	
	sum = 0;
	i = 0;
	x = 1;
	d = 1;
	
	while (x * d > e)
	{
		// Cap nhat sum
		sum += x;
		
		// Tinh so hang tiep theo
		i++;
		d = -d;
		x = (float)d / (float)(2 * i + 1);		
	};
	
	printf("PI = %f", sum * 4);
}
