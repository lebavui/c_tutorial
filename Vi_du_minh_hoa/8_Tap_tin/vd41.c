#include <stdio.h>

// Ghep noi dung file nguon vao cuoi file dich

void main()
{
	FILE *f1, *f2;
	char path1[64], path2[64];
	char buf[1024];
	int n;
	
	printf("Nhap duong dan file nguon: ");
	gets(path1);
	
	printf("Nhap duong dan file dich: ");
	gets(path2);
	
	f1 = fopen(path1, "rb");
	f2 = fopen(path2, "a+b");	// Mo ra de ghi tiep
	fseek(f2, 0, SEEK_END);		// Nhay den cuoi file dich
	
	while (!feof(f1))
	{
		n = fread(buf, 1, sizeof(buf), f1);
		fwrite(buf, 1, n, f2);
	}
	
	fclose(f1);
	fclose(f2);
}
