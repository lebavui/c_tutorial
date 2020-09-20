#include <stdio.h>

void main()
{
	// Nhap vao 3 diem toan, ly, hoa
	// Tinh va in ra diem trung binh
	// Tim va in ra diem lon nhat
	// Tim va in ra diem nho nhat
	
	float dToan, dLy, dHoa;
	float dTB;
	float dMax, dMin;
	
	printf("Nhap 3 diem Toan, Ly, Hoa: ");
	scanf("%f%f%f", &dToan, &dLy, &dHoa);
	
	dTB = (dToan + dLy + dHoa) / 3;
	dMax = dToan > dLy ? dToan : dLy;
	dMax = dMax > dHoa ? dMax : dHoa;
	dMin = dToan < dLy ? dToan : dLy;
	dMin = dMin < dHoa ? dMin : dHoa;
	
	printf("Diem trung binh la: %.2f\n", dTB);
	printf("Diem cao nhat la: %.2f\n", dMax);
	printf("Diem thap nhat la: %.2f\n", dMin);
}
