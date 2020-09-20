#include <stdio.h>
#include <string.h>
#include <ctype.h>

int kiemtra(char *, char *);	// Ham tra ve 1 neu 2 xau giong nhau, tra ve 0 neu khac nhau

void main()
{
	char s1[32], s2[32];
	
	printf("Nhap xau 1: ");
	gets(s1);
	
	printf("Nhap xau 2: ");
	gets(s2);
	
	if (kiemtra(s1, s2))
		printf("Hai xau giong nhau");
	else
		printf("Hai xau khac nhau");
}

int kiemtra(char *s1, char *s2)
{
	int n1, n2;
	int i, flag;
	
	n1 = strlen(s1);
	n2 = strlen(s2);
	
	if (n1 != n2)	// Neu 2 xau khac do dai thi khac nhau
		return 0;
		
	flag = 1;
	i = 0;
	while (i < n1)
	{
		if (toupper(s1[i]) != toupper(s2[i]))
		{
			flag = 0;
			break;
		}
		i++;
	}
	
	return flag == 1;
}
