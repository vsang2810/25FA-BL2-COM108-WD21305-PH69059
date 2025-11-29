#include <stdio.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
	printf("\n");
}

void sapXepPhanTuMang()
{
	//Cach 2:
	//int mangSonguyen[100];
	//int length;
	//scanf_s("%d", &length);  /// nhap kich thuoc mang

	int mangSonguyen[4];
	int length = sizeof(mangSonguyen) / sizeof(int);
	int tmp; //bien hoan vi
	for (int i = 0; i < length; i++)
	{
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf_s("%d", &mangSonguyen[i]);
		printf("mangSonguyen[%d] = %d\n", i, mangSonguyen[i]);
	}
	printf("Mang truoc khi sap xep: ");
	for (int i = 0; i < length; i++)
	{
		printf("%d ", mangSonguyen[i]);
	}
	// sap xep mang tang dan
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (mangSonguyen[i] > mangSonguyen[j])
			{
				tmp = mangSonguyen[i];
				mangSonguyen[i] = mangSonguyen[j];
				mangSonguyen[j] = tmp;
			}
		}
	}
	printf("\nMang sau khi sap xep: ");
	for (int i = 0; i < length; i++)
	{
		printf("%d ", mangSonguyen[i]);
	}
	
}
void lapChucNang(int chonChucNang)
{
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			sapXepPhanTuMang();
			break;
		case 3:
			// ham goi chuc nang 3
			break;
		default:
			printf("Chon sai. Chuc nang hop le [0-3]");
			break;
		}

		printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
		scanf_s("%d", &tiepTuc);
		system("cls");
	}

}



int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Sap xep phan tu mang ");
		printf("\n");
		printf("3. TEN chuc nang 3");
		printf("\n");
		printf("0. Thoat");
		printf("\n");
		printf("Hay chon chuc nang [0-3]: ");
		scanf_s("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}


// GV: AnhTT184