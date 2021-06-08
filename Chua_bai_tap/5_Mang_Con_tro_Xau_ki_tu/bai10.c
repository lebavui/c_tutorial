#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Nhap van ban
// a. Nhap xau s, chi ra vi tri xuat hien xau s.
// b. Thay cac chuoi "hanoi" bang "HANOI"
// c. Dem trong van ban co bao nhieu tu

int main()
{
	char text[60][80];
	char line[80], s[80];
	char *p;
	int i, j, n, c;
	
	// Nhap van ban den khi gap dong trong thi ket thuc
	printf("Nhap van ban: (Enter de nhap dong moi, nhap dong trong de ket thuc)\n");
	n = 0;
	do
	{
		gets(line);
		if (line[0] == 0) break;
		strcpy(text[n], line);
		n++;
		if (n == 60)
			break;	
	}
	while (1);
	 
	// Nhap xau s va tim vi tri xau s
	printf("Nhap xau s: ");
	gets(s);
	
	// Xet tung dong cua van ban
	for (i = 0; i < n; i++)
	{
		// Tim xau s tu vi tri dau tien
		p = strstr(text[i], s);
		while (p != 0) // Chung nao con tim thay
		{
			// In vi tri ra man hinh
			printf("Line %d, Col: %d\n", i + 1, p - text[i] + 1);
			// Tim xau s tu vi tri tiep theo
			p = strstr(p + 1, s);
		}	
	} 
	
	// Thay cac chuoi "hanoi" bang "HANOI"
	// Xet tung dong cua van ban
	for (i = 0; i < n; i++)
	{
		// Tim xau "hanoi" tu vi tri dau tien
		p = strstr(text[i], "hanoi");
		while (p != 0) // Chung nao con tim thay
		{
			// Thay xau "hanoi" bang xau "HANOI"
			for (j = 0; j < 5; j++)
				p[j] = p[j] - 32;	// chuyen chu thuong thanh chu hoa
				
			// Tim xau "hanoi" tu vi tri tiep theo
			p = strstr(p + 1, s);
		}	
	} 
	
	// In van ban ket qua ra man hinh.
	printf("Van ban sau khi xu ly: \n");
	for (i = 0; i < n; i++)
		puts(text[i]);

	// Dem so luong cac tu trong van ban.
	c = 0;
	for (i = 0; i < n; i++)
	{
		// Tim den tu dau tien
		j = 0;
		while (text[i][j] == ' ') j++;
		c++;	// Tu dau tien cua dong i;
		
		while (text[i][j] != 0)
		{
			if (text[i][j] == ' ' && text[i][j+1] != ' ') c++;
			j++;
		}
	}
	
	printf("So luong tu co trong van ban: %d\n", c);
	
	return 0;
}
