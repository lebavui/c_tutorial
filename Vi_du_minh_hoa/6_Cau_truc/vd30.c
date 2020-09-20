#include <stdio.h>

typedef struct
{
	char hoten[30];
	char lop[5];
	int diemTDC;
} SINHVIEN;

void main()
{
	// Vi du bai tap cau truc
	SINHVIEN sv[20], tmp;
	int n, i, j;
	float x;
	
	// Nhap so luong va thong tin n sinh vien
	printf("Nhap so luong sinh vien (5 <= n <= 20): ");
	scanf("%d", &n);
	
	while (n < 5 || n > 20)
	{
		printf("So luong sinh vien khong hop le.\n");
		printf("Nhap so luong sinh vien (5 <= n <= 20): ");
		scanf("%d", &n);
	}
	
	for (i = 0; i < n; i++)
	{
		printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
		printf("Ho ten: ");
		fflush(stdin);
		gets(sv[i].hoten);
		printf("Lop: ");
		fflush(stdin);
		gets(sv[i].lop);
		printf("Diem thi Tin dai cuong: ");
		scanf("%d", &sv[i].diemTDC);
	}
	
	printf("Danh sach sinh vien vua nhap: \n");
	printf("%3s %-30s %-5s %4s", "STT", "Ho ten", "Lop", "Diem");
	for (i = 0; i < n; i++)
		printf("\n%3d %-30s %-5s %4d", i + 1, sv[i].hoten, sv[i].lop, sv[i].diemTDC);
		
	printf("\nNhap so thuc x = ");
	scanf("%f", &x);
	
	j = 0;
	printf("Danh sach sinh vien co diem nho hon %.2f: \n", x);
	printf("%3s %-30s %-5s %4s", "STT", "Ho ten", "Lop", "Diem");
	for (i = 0; i < n; i++)
		if (sv[i].diemTDC < x)
			printf("\n%3d %-30s %-5s %4d", ++j, sv[i].hoten, sv[i].lop, sv[i].diemTDC);
			
	// Sap xep theo diem thi tin dai cuong giam dan
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (sv[i].diemTDC < sv[j].diemTDC)
			{
				tmp = sv[i];
				sv[i] = sv[j];
				sv[j] = tmp;
			}
			
	printf("\nDanh sach sinh vien sau khi sap xep: \n");
	printf("%3s %-30s %-5s %4s", "STT", "Ho ten", "Lop", "Diem");
	for (i = 0; i < n; i++)
		printf("\n%3d %-30s %-5s %4d", i + 1, sv[i].hoten, sv[i].lop, sv[i].diemTDC);
}
