#include <stdio.h>
#include <math.h>

// Lap trinh doc toa do 4 diem A, B, C, M.
// Kiem tra M nam trong, nam tren canh, hay nam ngoai tam giac ABC.

int main()
{
	int xa, ya, xb, yb, xc, yc, xm, ym;
	float Sabc, Sabm, Sacm, Sbcm;
	
	printf("Nhap toa do diem A: ");
	scanf("%d%d", &xa, &ya);
	printf("Nhap toa do diem B: ");
	scanf("%d%d", &xb, &yb);
	printf("Nhap toa do diem C: ");
	scanf("%d%d", &xc, &yc);
	printf("Nhap toa do diem M: ");
	scanf("%d%d", &xm, &ym);
	
	// Tinh dien tich cac tam giac
	Sabc = 0.5 * abs((xb-xa)*(yc-ya)-(xc-xa)*(yb-ya));
	Sabm = 0.5 * abs((xb-xa)*(ym-ya)-(xm-xa)*(yb-ya));
	Sacm = 0.5 * abs((xc-xa)*(ym-ya)-(xm-xa)*(yc-ya));
	Sbcm = 0.5 * abs((xc-xb)*(ym-yb)-(xm-xb)*(yc-yb));
	
	printf("Sabc = %f\n", Sabc);
	printf("Sabm = %f\n", Sabm);
	printf("Sacm = %f\n", Sacm);
	printf("Sbcm = %f\n", Sbcm);
	
	if (Sabm == 0 || Sbcm == 0 || Sbcm == 0)
		printf("M nam tren canh tam giac ABC");
	else if (Sabm + Sacm + Sbcm == Sabc)
		printf("M nam trong tam giac ABC");
	else
		printf("M nam ngoai tam giac ABC");
	
	return 0;
}
