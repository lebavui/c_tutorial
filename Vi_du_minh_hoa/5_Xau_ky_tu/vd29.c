#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
	// Nhap xau ky tu
	// Xoa cac dau cach du thua trong xau
	
	char s1[32], s2[32];
	int i, j;
	
	printf("Nhap xau ky tu: ");
	gets(s1);
		
	i = j = 0;
	
	// Tim den ky tu dau tien khong phai dau cach
	while (isspace(s1[i])) i++;
	
	// Xet tung ky tu cua xau 1
	while (i <= strlen(s1))
	{
		if (!isspace(s1[i]))
		{
			// Neu khong phai dau cach thi copy vao xau 2
			s2[j] = s1[i];
			j++;
		}
		else if (!isspace(s1[i + 1]) && s1[i + 1] != 0)
		{
			// Neu la dau cach ma ky tu tiep theo khong phai la dau cach
			// Thi copy vao xau 2
			s2[j] = s1[i];
			j++;
		}
		i++;
	}
	
	printf("Xau moi: --%s--", s2);
}
