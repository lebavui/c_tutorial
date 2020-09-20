#include <stdio.h>

// Sao chep noi dung tu file nguon sang file dich

void main()
{
	FILE *f1, *f2;
	char path1[64], path2[64];
	char buf1[1024], buf2[1024];
	int n;
	
	printf("Nhap duong dan file nguon: ");
	gets(path1);
	
	printf("Nhap duong dan file dich: ");
	gets(path2);
	
	f1 = fopen(path1, "rb");
	f2 = fopen(path2, "wb");
	
	while (!feof(f1))
	{
		n = fread(buf1, 1, sizeof(buf1), f1);
		fwrite(buf1, 1, n, f2);
	}
	
	fclose(f1);
	fclose(f2);
}
