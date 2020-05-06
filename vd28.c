#include <stdio.h>
#include <string.h>

void main()
{
	// Nhap xau ky tu
	// In ra xau theo chieu nguoc lai 
	
	char s[32];
	int i;
	
	printf("Nhap xau ky tu: ");
	gets(s);
		
	printf("Xau theo chieu nguoc lai la:\n");
	for (i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
}
