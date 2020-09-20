#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	// Nhap xau ky tu
	// Chuyen cac ky tu dau moi tu thanh chu hoa, cac ky tu con lai thanh chu thuong
	
	char s[32];
	int i;
	
	printf("Nhap xau ky tu: ");
	gets(s);
	
	if (islower(s[0]))
		s[0] = toupper(s[0]);
	
	for (i = 1; i < strlen(s); i++)
	{
		if (islower(s[i]) && isspace(s[i - 1]))
			s[i] = toupper(s[i]);
		else if (isupper(s[i]))
			s[i] = tolower(s[i]);
	}
	
	printf("Chuoi moi: %s", s);
}
