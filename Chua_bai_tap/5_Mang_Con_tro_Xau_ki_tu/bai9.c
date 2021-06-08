#include <stdio.h>
#include <string.h>

// Nhap vao 2 xau s1, s2 va so nguyen k.
// Chen xau s1 vao s2 tai vi tri k.

int main()
{
	char s1[32], s2[64], st[32];
	int k;
	
	printf("Nhap xau s1: ");
	gets(s1);
	printf("Nhap xau s2: ");
	gets(s2);
	printf("Nhap k: ");
	scanf("%d", &k);
	
	// Copy xau s2 tu vi tri k ra xau tam
	strcpy(st, s2 + k);
	// Copy xau s1 vao vi tri k trong xau s2
	strcpy(s2 + k, s1);
	// Ghep xau s2 voi xau tam
	strcat(s2, st);
	
	printf("Ket qua: %s", s2);
	
	return 0;
}
