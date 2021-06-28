#include <stdio.h>
#include <math.h>

// Viet ham tinh khoang cach trong khong gian 3 chieu

typedef struct {
	float X, Y, Z;
} KG3D;

KG3D trung_diem(KG3D d1, KG3D d2)
{
	KG3D m;
	m.X = (d1.X + d2.X) / 2;
	m.Y = (d1.Y + d2.Y) / 2;
	m.Z = (d1.Z + d2.Z) / 2;
	return m;
}

void main()
{
	KG3D d1, d2, m;
	printf("Nhap toa do diem 1: ");
	scanf("%f%f%f", &d1.X, &d1.Y, &d1.Z);
	printf("Nhap toa do diem 2: ");
	scanf("%f%f%f", &d2.X, &d2.Y, &d2.Z);
	
	m = trung_diem(d1, d2);
	printf("Toa do trung diem la: (%f,%f,%f)", m.X, m.Y, m.Z);
}
