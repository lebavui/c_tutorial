#include <stdio.h>
#include <ctype.h>

// Viet ham kiem tra 2 xau ky tu co giong nhau khong
// Khong phan biet chu hoa chu thuong

int so_sanh_xau(char *s1, char *s2)
{
	int i = 0, c = 1;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (toupper(s1[i]) != toupper(s2[i]))
		{
			c = 0;
			break;
		}
		i++;
	}
	
	if (s1[i] != s2[i])
		c = 0;
		
	return c == 1;
}

void main()
{
	char s1[100], s2[100];
	
	printf("Nhap xau 1: ");
	gets(s1);
	
	printf("Nhap xau 2: ");
	gets(s2);
	
	if (so_sanh_xau(s1, s2))
		printf("Hai xau giong nhau!\n");
	else
		printf("Hai xau khac nhau!\n");
}
