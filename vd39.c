#include <stdio.h>

// So sanh noi dung 2 file

void main()
{
	FILE *f1, *f2;
	char path1[64], path2[64];
	char buf1[1024], buf2[1024];
	int size1, size2;
	int n, i;
	int flag;
	
	printf("Nhap duong dan file 1: ");
	gets(path1);
	
	printf("Nhap duong dan file 2: ");
	gets(path2);
	
	f1 = fopen(path1, "rb");
	f2 = fopen(path2, "rb");
	
	// Lay kich thuoc file
	fseek(f1, 0, SEEK_END);
	size1 = ftell(f1);
	fseek(f2, 0, SEEK_END);
	size2 = ftell(f2);
	
	if (size1 != size2)
	{
		// 2 file co kich thuoc khac nhau thi khac nhau
		printf("Hai file co noi dung khac nhau.");
		fclose(f1);
		fclose(f2);
		return;
	}
	
	// Di chuyen con tro file ve dau
	fseek(f1, 0, SEEK_SET);
	fseek(f2, 0, SEEK_SET);
	
	flag = 1;	
	while (!feof(f1) && !feof(f2))
	{
		n = fread(buf1, 1, sizeof(buf1), f1);
		n = fread(buf2, 1, sizeof(buf2), f2);
		
		i = 0;
		while (i < n && buf1[i] == buf2[i]) i++;
		if (i < n)
		{
			flag = 0;
			break;
		}
	}
	
	fclose(f1);
	fclose(f2);
	
	if (flag == 1)
		printf("Hai file co noi dung giong nhau.");
	else
		printf("Hai file co noi dung khac nhau.");
}
