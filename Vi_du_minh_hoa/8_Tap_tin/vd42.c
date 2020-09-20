#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Dem so ky tu, so tu, so cau trong file van ban.
// Gia su giua cac tu phan cach nhau boi dau cach, dau xuong dong
// Giua cac cau phan cach boi dau cham.
void main()
{
	FILE *f;
	char path[64];
	char buf[1024];
	int i;
	int c1, c2, c3;
	
	printf("Nhap duong dan file: ");
	gets(path);
	
	f = fopen(path, "r");
	
	c1 = c2 = c3 = 0;
	
	while (!feof(f))
	{
		fgets(buf, sizeof(buf), f);
		c1 += strlen(buf);	// So ky tu
		for (i = 0; i < strlen(buf); i++)
		{
			if (isspace(buf[i])) c2++;	// So tu
			if (buf[i] == '.') c3++;	// So cau
		}
	}
	
	fclose(f);
	
	printf("So ky tu: %d\n", c1);
	printf("So tu: %d\n", c2);
	printf("So cau: %d\n", c3);	
}
