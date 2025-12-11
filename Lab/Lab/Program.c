#include <stdio.h>
#include <math.h>
#include <string.h>

void Menu()
{
    printf("\n============ MENU CHUC NANG ============\n");
    printf("1. Thong tin thu cung\n");
    printf("2. Tong cac so\n");
    printf("3. Thong tin cua hang\n");
    printf("0. Thoat chuong trinh\n");
    printf("=======================================\n");
}

#define MAX 100
void thongTinThuCung()
{
	system("cls");
    printf_s("CN1: THONG TIN THU CUNG\n");
    printf_s("-----Bat dau thuc hien chuc nang-----\n");
    int n;
	int tuoi;
    struct ThuCung
    {
		char ma[10];
        char ten[30];
		int namSinh;
	};
    printf_s("Nhap so luong thu cung can kiem tra: ");
	scanf_s("%d", &n);
	struct ThuCung thuCung[MAX];
    for (int i = 0; i < n; i++)
    {
        printf_s("Nhap thong tin thu cung thu %d:\n", i + 1);
        printf_s("Ma thu cung: ");
        scanf_s("%s", thuCung[i].ma, sizeof(thuCung[i].ma));
        printf_s("Ten thu cung: ");
        scanf_s("%s", thuCung[i].ten, sizeof(thuCung[i].ten));
        do{
        printf_s("Nam sinh: ");
        if (scanf_s("%d", &thuCung[i].namSinh) < 0 || scanf_s("%d", &thuCung[i].namSinh) > 2025)
        {
            printf_s("Nam sinh khong hop le. Vui long nhap lai!\n");
        }
		} while (thuCung[i].namSinh < 0 || thuCung[i].namSinh > 2025);
	}
    system("cls");
	printf_s("\nDanh sach thu cung vua nhap:\n");
    for (int i = 0; i < n; i++)
    {
        printf_s("Thu cung thu %d:\n", i + 1);
        printf_s("Ma thu cung: %s\n", thuCung[i].ma);
        printf_s("Ten thu cung: %s\n", thuCung[i].ten);
        printf_s("Nam sinh: %d\n", thuCung[i].namSinh);
		printf_s("Tuoi: %d\n", 2025 - thuCung[i].namSinh);
	}
}
void tinhTong()
{
    system("cls");
    printf_s("CN2: TONG CAC SO LE TU 1 DEN N\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	int n;
    do
    {
		printf_s("Nhap so nguyen duong n lon hon 3: ");
		scanf_s("%d", &n);
        if (n <= 3)
        {
            printf_s("So ban nhap khong hop le. Vui long nhap lai!\n");
		}
	} while (n <= 3);
    printf_s("Cac so le tu 1 den %d la: ", n);
    {
        for (int i = 1; i <= n; i++)
        {
            printf_s("%d ", i);
        }
    }
	printf_s("\nTong cac so le tu 1 den %d la: ", n);
    {
		double tong = 0;
        for (int i = 1; i <= n; i += 2)
        {
            tong += i;
        }
        printf_s("%.2f\n", tong);
    }
}
void thongtinCuaHang()
{
    system("cls");
	printf_s("CN3: THONG TIN CUA HANG\n");
	int n;
	printf_s("Nhap so luong thu cung can quan ly: ");
	scanf_s("%d", &n);
	printf_s("\n");
    do
    {
        if (n <= 0)
        {
            printf_s("So luong thu cung khong hop le.Vui long nhap lai\n");
            return;
        }
	} while (n <= 0);
	printf_s("Nhap mang can nang cua thu cung:\n");
    float canNang[MAX];
    for (int i = 0; i < n; i++)
    {
        printf_s("Can nang thu cung thu %d: ", i + 1);
        scanf_s("%f", &canNang[i]);
    }
    float maxCanNang = canNang[0];
    for (int i = 1; i < n; i++)
    {
        if (canNang[i] > maxCanNang)
        {
            maxCanNang = canNang[i];
        }
    }
	double canNangTB = 0;
    for (int i = 0; i < n; i++)
    {
        canNangTB += canNang[i];
	}
    canNangTB /= n;
	double minCanNang = canNang[0];
    for (int i = 1; i < n; i++)
    {
        if (canNang[i] < minCanNang)
        {
            minCanNang = canNang[i];
        }
    }
	printf_s("Can nang nho nhat trong cac thu cung la: %.2f\n", minCanNang);
	printf_s("Can nang trung binh cua cac thu cung la: %.2f\n", canNangTB);
	printf_s("Can nang lon nhat trong cac thu cung la: %.2f\n", maxCanNang);
	printf_s("Cac thu cung co can nang be hon can nang trung binh la:\n");
    for (int i = 0; i < n; i++)
    {
        if (canNang[i] < canNangTB)
        {
            printf_s("Thu cung thu %d co can nang la: %.2f\n", i + 1, canNang[i]);
        }
	}
}

int main()
{
    int chon, tiepTuc;
    do
    {
        Menu();
        do
        {
            printf("Xin moi chon chuc nang (0-3): ");
            scanf_s("%d", &chon);

            if (chon < 0 || chon > 3)
            {
                printf("So ban nhap khong hop le (0-3). Vui long nhap lai!\n");
            }
        } while (chon < 0 || chon > 3);

        if (chon != 0)
        {
            do
            {
                switch (chon)
                {
                case 1:
                    thongTinThuCung();
                    break;
                case 2:
					tinhTong();
                    break;
                case 3:
                    thongtinCuaHang();
                    break;
                }

                printf("Ban co muon thuc hien lai chuc nang nay [1 = Co || 0 = Khong]\n");
                printf("Moi nguoi dung nhap: ");
                if (scanf_s("%d", &tiepTuc) != 1)
                {
                    tiepTuc = 0;
                }

            } while (tiepTuc == 1);

            system("cls");
        }

    } while (chon != 0);
}