#include <stdio.h>
#include <math.h>

typedef struct
{
	float x, y, z;
} POINT3D;

float khoang_cach(POINT3D, POINT3D);
POINT3D trung_diem(POINT3D, POINT3D);

void main()
{
	POINT3D p1, p2;
	POINT3D p;
	
	printf("Nhap toa do diem 1: ");
	scanf("%f%f%f", &p1.x, &p1.y, &p1.z);
	printf("Nhap toa do diem 2: ");
	scanf("%f%f%f", &p2.x, &p2.y, &p2.z);
	
	printf("Khoang cach giua 2 diem: %.2f\n", khoang_cach(p1, p2));
	
	p = trung_diem(p1, p2);
	printf("Trung diem cua doan thang: %.2f %.2f %.2f\n", p.x, p.y, p.z);
}

float khoang_cach(POINT3D p1, POINT3D p2)
{
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y) + (p1.z - p2.z) * (p1.z - p2.z));
}

POINT3D trung_diem(POINT3D p1, POINT3D p2)
{
	POINT3D p;
	p.x = (p1.x + p2.x) / 2;
	p.y = (p1.y + p2.y) / 2;
	p.z = (p1.z + p2.z) / 2;
	return p;
}
