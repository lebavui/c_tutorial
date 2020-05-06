#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	// Nhap xau ky tu
	// Dem so tu co trong xau
	
	char s[32];
	int i, c;
	
	printf("Nhap xau ky tu: ");
	gets(s);
	
	c = 0;
	
	for (i = 0; i < strlen(s); i++)
		if (isspace(s[i]))
			c++;
		
	printf("So tu co trong xau la: %d\n", c);
}
