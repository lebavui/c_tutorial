#include <stdio.h>

// Nhap xau ki tu, xoa dau cach du thua trong xau

int main()
{
	char s[256];
	int i, j;
	
	printf("Nhap xau: ");
	gets(s);
	
	// Tim den ki tu dau tien khac dau ' '
	i = 0;
	while (s[i] == ' ') i++;
	
	// Copy cac ki tu dan dan vao chinh xau s
	j = 0;	// j la vi tri copy vao
	while (s[i] != 0)
	{
		if (s[i] != ' ')		// Neu khong phai dau cach
			s[j++] = s[i++];	// Thi copy tu i den j va tang gia tri i, j
		else if (s[i] == ' ' && s[i+1] != ' ') // Neu khong phai 2 dau cach lien nhau
			s[j++] = s[i++];	// Thi copy tu i den j va tang gia tri i, j
		else					// Cac truong hop con lai thi bo qua, xet ki tu tiep theo
			i++;
	}
	
	// Xoa dau cach o cuoi xau neu co
	if (s[j-1]==' ')
		s[j-1] = 0;
	else
		s[j] = 0;
	
	printf("Ket qua:\n");
	printf("---%s---", s);
	
	return 0;
}
