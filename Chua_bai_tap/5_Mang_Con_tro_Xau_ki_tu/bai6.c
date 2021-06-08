#include <stdio.h>
#include <ctype.h>

// Nhap vao xau ki tu, dem so ki tu chu hoa, chu thuong va chu so trong xau

int main()
{
	char s[100];
	int i, c1, c2, c3;
	
	printf("Nhap xau ki tu: ");
	gets(s);
	
	c1 = c2 = c3 = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (isupper(s[i])) c1++;
		else if (islower(s[i])) c2++;
		else if (isdigit(s[i])) c3++;
		i++;
	}
	
	printf("So ki tu chu hoa: %d\n", c1);
	printf("So ki tu chu thuong: %d\n", c2);
	printf("So ki tu chu so: %d\n", c3);
	
	return 0;
}
