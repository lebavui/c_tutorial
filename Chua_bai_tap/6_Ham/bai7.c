#include <stdio.h>
#include <math.h>

// Viet ham tinh khoang cach trong khong gian 3 chieu

typedef struct {
	float X, Y, Z;
} KG3D;

float khoang_cach(KG3D d1, KG3D d2)
{
	return sqrt((d1.X - d2.X) * (d1.X - d2.X) + (d1.Y - d2.Y) * (d1.Y - d2.Y) + (d1.Z - d2.Z) * (d1.Z - d2.Z));
}

void main()
{
	KG3D d1, d2;
	printf("Nhap toa do diem 1: ");
	scanf("%f%f%f", &d1.X, &d1.Y, &d1.Z);
	printf("Nhap toa do diem 2: ");
	scanf("%f%f%f", &d2.X, &d2.Y, &d2.Z);
	printf("Khoang cach giua 2 diem la: %f", khoang_cach(d1, d2));
}
