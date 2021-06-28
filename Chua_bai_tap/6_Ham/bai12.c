#include <stdio.h>
#include <string.h>

// Tinh tien dien

typedef struct {
	char chuho[32];
	float sodien;
	float tiendien;
} HoGD;

float tien_dien(float sodien)
{
	if (sodien < 250)
		return sodien * 2000;
	else if (sodien < 400)
		return 250 * 2000 + (sodien - 250) * 3000; 
	else if (sodien < 500)
		return 250 * 2000 + 150 * 3000 + (sodien - 400) * 4000;
	else
		return 250 * 2000 + 150 * 3000 + 100 * 4000 + (sodien - 500) * 5000;
}

void main()
{
	HoGD hgd[100];
	int n, i, j, imin;
	float min;
	HoGD tg;
	
	printf("Nhap danh sach ho gia dinh:\n");
	
	n = 0;
	while (n < 100)
	{
		printf("Nhap ten chu ho: ");
		fflush(stdin);
		gets(hgd[n].chuho);
		if (strcmp(hgd[n].chuho, "***") == 0)
			break;
		
		printf("Nhap so dien tieu thu: ");
		scanf("%f", &hgd[n].sodien);
		
		hgd[n].tiendien = tien_dien(hgd[n].sodien);
		
		n++;		
	}
	
	if (n == 0)
		return;
	
	// Tim ho gia dinh tra tien dien it nhat
	min = hgd[0].tiendien;
	imin = 0;
	for (i = 1; i < n; i++)
		if (hgd[i].tiendien < min)
		{
			min = hgd[i].tiendien;
			imin = i;
		}
		
	printf("Ho gia dinh tra tien dien nho nhat la: %s\n", hgd[imin].chuho);
	
	printf("Danh sach tang dan so tien phai tra:\n");
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (hgd[i].tiendien > hgd[j].tiendien)
			{
				tg = hgd[i];
				hgd[i] = hgd[j];
				hgd[j] = tg;
			}
	printf("%-30s%-10s%-10s\n", "Chu ho", "So dien", "So tien");
	for (i = 0; i < n; i++)
		printf("%-30s%10.2f%10.2f\n", hgd[i].chuho, hgd[i].sodien, hgd[i].tiendien);
}
