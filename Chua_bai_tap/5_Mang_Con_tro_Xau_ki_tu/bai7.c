#include <stdio.h>
#include <ctype.h>

// Nhap xau ki tu, chuyen cac chu cai dau cac tu thanh chu hoa, cac chu cai con lai la chu thuong.

int main()
{
	char s[100];
	int i, j;
	
	printf("Nhap xau ki tu: ");
	gets(s);
	
	i = 0;
		
	// Tim den ki tu chu cai dau tien
	while (!isalpha(s[i]) && s[i] != 0) i++;	
	
	// Neu khong phai ket thuc xau thi chuyen thanh chu hoa
	if (s[i] != 0)
		s[i] = toupper(s[i]);
	
	// Duyet cac ki tu con lai
	j = i + 1;
	while (s[j] != 0)
	{
		if (isalpha(s[j]) && isspace(s[j-1])) 	// Neu la chu cai va truoc do la khoang trang
			s[j] = toupper(s[j]);				// thi chuyen thanh chu hoa
		else if (isalpha(s[j]))					// Con neu la chu cai
			s[j] = tolower(s[j]);				// thi chuyen thanh chu thuong
		j++;
	}
	
	printf("Xau sau khi xu ly: %s\n", s);
	
	return 0;
}
