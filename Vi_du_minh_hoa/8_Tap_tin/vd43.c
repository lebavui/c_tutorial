#include <stdio.h>

// Doc kich thuoc file anh BMP

void main()
{
	FILE *f;
	char path[64];
	short int width, height;
	
	printf("Nhap duong dan file: ");
	gets(path);
	
	f = fopen(path, "rb");
	fseek(f, 0x12, SEEK_SET);	// Di chuyen den byte 0x12
	fread(&width, 2, 1, f);		// Doc 2 byte vao bien width
	fseek(f, 0x16, SEEK_SET);	// Di chuyen den byte 0x16
	fread(&height, 2, 1, f);	// Doc 2 byte vao bien height
	fclose(f);
	
	printf("Kich thuoc anh la %dx%d", width, height);
}
