#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	// Nhap xau ky tu
	// Dem so ky tu chu hoa, chu thuong va chu so
	
	char s[32];
	int i, c1, c2, c3;
	
	printf("Nhap xau ky tu: ");
	gets(s);
	
	c1 = c2 = c3 = 0;
	
	for (i = 0; i < strlen(s); i++)
	{
		if (isupper(s[i]))
			c1++;
		if (islower(s[i]))
			c2++;
		if (isdigit(s[i]))
			c3++;
	}
	
	printf("So ky tu chu hoa: %d\n", c1);
	printf("So ky tu chu thuong: %d\n", c2);
	printf("So ky tu chu so: %d\n", c3);
}
