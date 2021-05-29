#include <stdio.h>

// Lap trinh nhap vao ky tu hexa.
// Dua ra gia tri he 10 tuong ung.

int main()
{
    char ch;
    printf("Nhap ky tu: ");
    scanf("%c", &ch);
    
    printf("Gia tri thap phan tuong ung la: ");
    if (ch >= '0' && ch <= '9')
    	printf("%d", ch - '0');
    else if (ch >= 'A' && ch <= 'F')
    	printf("%d", ch - 'A' + 10);
    else if (ch >= 'a' && ch <= 'f')
    	printf("%d", ch - 'a' + 10);
    else
    	printf("Ky tu khong hop le!!!");
    	
    return 0;
}
