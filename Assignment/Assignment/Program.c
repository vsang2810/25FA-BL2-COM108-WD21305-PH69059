#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void Menu()
{
	printf_s("________________________________\n");
	printf_s("     CHUONG TRINH TONG HOP\n");
	printf_s("________________________________\n");
	printf_s("1. Kiem tra so nguyen \n");
	printf_s("2. Tim Uoc va Boi so chung cua 2 so \n");
	printf_s("3. Tinh tien quan Karaoke \n");
	printf_s("4. Tinh tien dien \n");
	printf_s("5. Doi tien \n");
	printf_s("6. Tinh lai suat vay ngan hang vay tra gop \n");
	printf_s("7. Vay tien mua xe \n");
	printf_s("8. Thong tin sinh vien \n");
	printf_s("9. Game FPOLY-LOTT \n");
	printf_s("10. Tinh toan phan so \n");
	printf_s("0. Thoat chuong trinh \n");
}
//kiem tra so nguyen to 
int isprime(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
//kiem tra so chinh phuong
int cp(int n)
{
	int can = sqrt(n);
	{
		if (can * can == n)
			return 1;
		else
			return 0;
	}
}
// CN1
void KiemTraSoNguyen()
{
	system("cls");
	printf_s("CN1: KIEM TRA SO NGUYEN\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	double soNhap;
	int KetQuaKiemTra;
	printf_s("Vui long nhap vao mot so nguyen: ");
	scanf_s("%lf", &soNhap);
	if (soNhap == (int)soNhap)
	{
		printf_s("So %.2lf la so nguyen.\n", soNhap);
	}
	else
	{
		printf_s("So %.2lf khong phai la so nguyen.\n", soNhap);
	}
	KetQuaKiemTra = isprime((int)soNhap);
	if (KetQuaKiemTra == 1)
	{
		printf_s("So %d la so nguyen to.\n", (int)soNhap);
	}
	else
	{
		printf_s("So %d khong phai la so nguyen to.\n", (int)soNhap);
	}
	if (cp((int)soNhap) == 1)
	{
		printf_s("So %d la so chinh phuong.\n", (int)soNhap);
	}
	else
	{
		printf_s("So %d khong phai la so chinh phuong.\n", (int)soNhap);
	}
}
void TimUocVaBoiSoChung()
{
	system("cls");
	printf_s("CN2: TIM UOC VA BOI SO CHUNG CUA 2 SO\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	int x, y;
	printf_s("Vui long nhap vao so nguyen x: ");
	scanf_s("%d", &x);
	printf_s("Vui long nhap vao so nguyen y: ");
	scanf_s("%d", &y);
	int a = x;
	int b = y;
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf_s("Uoc chung lon nhat cua %d va %d la: %d\n", x, y, a);
	printf_s("Boi chung nho nhat cua %d va %d la: %d\n", x, y, (x * y) / a);
}
void TinhTienKaraoke()
{
	system("cls");
	printf_s("CN3: TINH TIEN QUAN KARAOKE\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	int gioBatDau, gioKetThuc;
	printf_s("Moi nhap vao gio bat dau: ");
	scanf_s("%d", &gioBatDau);
	printf_s("Moi nhap vao gio ket thuc: ");
	scanf_s("%d", &gioKetThuc);
	if (gioKetThuc <= gioBatDau)
	{
		printf_s("Gio ket thuc phai lon hon gio bat dau. Vui long nhap lai!\n");
		return;
	}
	int soGio = gioKetThuc - gioBatDau;
	int tienThanhToan = 0;
	if (soGio <= 3)
	{
		tienThanhToan = soGio * 150;
	}
	else
	{
		tienThanhToan = 3 * 150 + (soGio - 3) * 150 * 30 / 100;
	}
	if (gioBatDau > 14 && gioKetThuc < 17)
	{
		tienThanhToan = tienThanhToan * 90 / 100;
	}
	printf_s("So gio hat: %d\n", soGio);
	printf_s("So tien phai thanh toan: %d.000 VND\n", tienThanhToan);
}
void TinhTienDien()
{
	system("cls");
	printf_s("CN4: TINH TIEN DIEN\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	double soDien;
	printf_s("Nhap so dien tieu thu trong thang (kWh): ");
	scanf_s("%lf", &soDien);
	double tienDien;
	if (soDien <= 50)
	{
		tienDien = soDien * 1.984;
	}
	else if (soDien <= 100)
	{
		tienDien = 50 * 1.984 + (soDien - 50) * 2.050;
	}
	else if (soDien <= 200)
	{
		tienDien = 50 * 1.984 + 50 * 2.050 + (soDien - 100) * 2.380;
	}
	else if (soDien <= 300)
	{
		tienDien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + (soDien - 200) * 2.998;
	}
	else if (soDien <= 400)
	{
		tienDien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + 100 * 2.998 + (soDien - 300) * 3.350;
	}
	else
	{
		tienDien = 50 * 1.984 + 50 * 2.050 + 100 * 2.380 + 100 * 2.998 + 100 * 3.350 + (soDien - 400) * 3.460;
	}
	printf_s("So tien dien phai tra trong thang la: %.3lf VND\n", tienDien);
}
void DoiTien()
{
	system("cls");
	printf_s("CN5: DOI TIEN\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	int menhgia[] = { 500000,200000,100000,50000,20000,10000,5000,2000,1000 };
	double sotien;
	int i;
	int soluongto;
	printf_s("Nhap so tien can doi (VND): ");
	scanf_s("%lf", &sotien);
	if (sotien <= 0)
	{
		printf_s("So tien can doi phai lon hon 0. Vui long nhap lai!\n");
	}
	printf_s("So tien ban can doi (VND) : %.0lf \n", sotien);
	double sotienconlai = sotien;
	int daDoi = 0;
	for (i = 0; i < sizeof(menhgia) / sizeof(menhgia[0]); i++)
	{
		soluongto = (int)(sotienconlai / menhgia[i]);
		if (soluongto > 0)
		{
			printf_s("So to menh gia %d VND: %d\n", menhgia[i], soluongto);
			daDoi += soluongto * menhgia[i];
			sotienconlai -= soluongto * menhgia[i];
			daDoi = 1;
		}
	}
	printf_s("Ban co muon doi so tien tren khong? [1: Co || 0: Khong]: ");
	int chon;
	scanf_s("%d", &chon);
	if (chon == 1)
	{
		printf_s("Ban da doi thanh cong so tien: %.0lf VND\n", sotien);
	}
	else
	{
		printf_s("Ban da huy giao dich doi tien.\n");
	}
}
void TinhLaiSuatVayNganHang()
{
	system("cls");
	printf_s("CN6: TINH LAI SUAT VAY NGAN HANG VAY TRA GOP\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	double sotienvay;
	printf_s("Nhap so tien muon vay (VND): ");
	scanf_s("%lf", &sotienvay);
	double laisuatthang = 0.05;
	double thangvay;
	printf_s("Nhap so thang muon vay: ");
	scanf_s("%lf", &thangvay);
	do
	{
		if (thangvay <= 0 || thangvay > 12)
		{
			printf_s("Ban phai thanh toan khoan vay trong 12 thang va ky han vay phai lon hon 0\n");
			printf_s("Nhap so thang muon vay: ");
			scanf_s("%lf", &thangvay);
		}
	} while (thangvay <= 0 || thangvay > 12);
	double tongtienlai = sotienvay * laisuatthang * thangvay;
	double tongtienphaitra = sotienvay + tongtienlai;
	printf_s("Tong tien lai phai tra sau %.0lf thang la: %.0lf VND\n", thangvay, tongtienlai);
	printf_s("So tien phai tra hang thang la: %.0lf VND\n", tongtienphaitra / thangvay);
}
void VayTienMuaXe()
{
	system("cls");
	printf_s("CN7: VAY TIEN MUA XE\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	double soTienVayCoDinh = 500;
	double laiSuatNam = 0.072;
	int thoiHanVay = 24;
	double laiSuatThang = laiSuatNam / 12;
	double phanTramVayToiDa;
	printf_s("So tien vay co dinh cua ban la: %.0lf trieu VND\n", soTienVayCoDinh);
	printf_s("Thoi han vay toi da la: %d thang\n", thoiHanVay);
	printf_s("Lai suat nam hien tai la: %.3lf/nam\n", laiSuatNam);
	do
	{
		printf_s("Nhap phan tram so tien muon vay: ");
		scanf_s("%lf", &phanTramVayToiDa);
		if (phanTramVayToiDa < 0 || phanTramVayToiDa > 100)
		{
			printf_s("Phan tram so tien muon vay phai trong khoang 0-100. Vui long nhap lai!\n");
		}
	} while (phanTramVayToiDa < 0 || phanTramVayToiDa > 100);
	do
	{
		printf_s("Nhap thoi han vay (thang): ");
		scanf_s("%d", &thoiHanVay);
		if (thoiHanVay <= 0 || thoiHanVay > 24)
		{
			printf_s("Thoi han vay phai trong khoang 1-24 thang. Vui long nhap lai!\n");
		}
	} while (thoiHanVay <= 0 || thoiHanVay > 24);
	double soTienVay = soTienVayCoDinh * (phanTramVayToiDa / 100);
	double tongTienLai = soTienVay * laiSuatThang * thoiHanVay;
	double tongSoTienPhaiTra = soTienVay + tongTienLai;
	printf_s("So tien ban vay la: %.0lf trieu VND\n", soTienVay);
	printf_s("Tong tien lai phai tra sau %d thang la: %.0lf trieu VND\n", thoiHanVay, tongTienLai);
	printf_s("So tien phai tra hang thang bao gom ca goc va lai la: %.0lf trieu VND\n", tongSoTienPhaiTra / thoiHanVay);
}

void ThongTinSinhVien()
{
	system("cls");
	printf_s("CN8: THONG TIN SINH VIEN\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
}
void GameFPOLYLOTT()
{
	system("cls");
	printf_s("CN9: GAME FPOLY-LOTT\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	int so1, so2, soTrung1, soTrung2;
	int giaiThuong = 0;
	srand(time(NULL));
	soTrung1 = rand() % 15 + 1;   
	do
	{
		soTrung2 = rand() % 15 + 1;
	} while (soTrung1 == soTrung2);
	while (1)
	{
		printf("Hay nhap 2 may man cua ban (tu 1 den 15):\n");
		printf("So thu nhat: ");
		scanf_s("%d", &so1);
		printf("So thu hai : ");
		scanf_s("%d", &so2);
		if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15 || so1 == so2)
		{
			printf_s("Vui long nhap 2 so khac nhau va trong khoang 1 den 15\n");
			continue;
		}
		break;
	}
	printf("======================================\n");
	printf("     KET QUA XO SO HOM NAY\n");
	printf("So trung giai: %02d va %02d\n", soTrung1, soTrung2);
	printf("Ban da chon   : %02d va %02d\n", so1, so2);
	printf("======================================\n");
	if (so1 == soTrung1 || so1 == soTrung2) giaiThuong++;
	if (so2 == soTrung1 || so2 == soTrung2) giaiThuong++;
	if (giaiThuong == 0) 
	{
		printf("Rat tiec! Ban chua trung so nao.\n");
		printf("Chuc ban may man lan sau!\n");
	}
	else if (giaiThuong == 1) {
		printf("CHUC MUNG! Ban da trung 1 so!\n");
		printf("=> Ban da trung giai nhi!\n");
	}
	else 
	{
		printf("*** CHUC MUNG BAN DA TRUNG GIAI NHAT!!! ***\n");
	}
}
void TinhToanPhanSo()
{
	system("cls");
	printf_s("CN10: TINH TOAN PHAN SO\n");
	printf_s("-----Bat dau thuc hien chuc nang-----\n");
	int tu1, tu2, mau1, mau2;
	printf("_Phan so thu nhat:\n");
	printf("Moi nhap tu so: ");
	scanf_s("%d", &tu1);
	do {
		printf("Moi nhap mau so (khac 0): ");
		scanf_s("%d", &mau1);
		if (mau1 == 0) printf("Mau so khong duoc bang 0!\n");
	} while (mau1 == 0);

	printf("_Phan so thu hai:\n");
	printf("Moi nhap tu so: ");
	scanf_s("%d", &tu2);
	do {
		printf("Moi nhap mau so (khac 0): ");
		scanf_s("%d", &mau2);
		if (mau2 == 0) printf("Loi: Mau so khong duoc bang 0!\n");
	} while (mau2 == 0);
	printf("\nPhan so thu nhat co dang: %d/%d\n", tu1, mau1);
	printf("Phan so thu hai co dang: %d/%d\n", tu2, mau2);
	printf("=======================================\n");
	printf("          BAT DAU TINH TOAN         \n");
	printf("=======================================\n");

	int tu_tong = tu1 * mau2 + tu2 * mau1;
	int mau_tong = mau1 * mau2;
	printf(" Tong = %d/%d + %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tu_tong, mau_tong);

	int tu_hieu = tu1 * mau2 - tu2 * mau1;
	int mau_hieu = mau1 * mau2;
	printf(" Hieu = %d/%d - %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tu_hieu, mau_hieu);

	int tu_tich = tu1 * tu2;
	int mau_tich = mau1 * mau2;
	printf(" Tich = %d/%d * %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tu_tich, mau_tich);

	int tu_thuong = tu1 * mau2;
	int mau_thuong = mau1 * tu2;
	if (mau_thuong == 0) {
		printf("Mau thuong bang 0. Khong hop le!\n");
	}
	else {
		printf("Thuong = %d/%d : %d/%d = %d/%d\n", tu1, mau1, tu2, mau2, tu_thuong, mau_thuong);
	}
	printf("\n********\n");
	printf("KET THUC TINH TOAN !!!\n");
}

int main()
{
	int chon;
	int tiepTuc;
	do
	{
		Menu();
		do
		{
			printf_s("Xin moi chon chuc nang (0-10): ");
			scanf_s("%d", &chon);
			if (chon < 0 || chon > 10)
			{
				printf_s("So ban nhap khong trong khoang 0-10. Vui long nhap lai!\n");
			}
			else
			{
				if (chon != 0)
				{
					do
					{
						switch (chon)
						{
						case 1:
							KiemTraSoNguyen();
							break;
						case 2:
							TimUocVaBoiSoChung();
							break;
						case 3:
							TinhTienKaraoke();
							break;
						case 4:
							TinhTienDien();
							break;
						case 5:
							DoiTien();
							break;
						case 6:
							TinhLaiSuatVayNganHang();
							break;
						case 7:
							VayTienMuaXe();
							break;
						case 8:
							ThongTinSinhVien();
							break;
						case 9:
							GameFPOLYLOTT();
							break;
						case 10:
							TinhToanPhanSo();
							break;
						}
						printf_s("Ban co muon thuc hien lai chuc nang nay [1 = Co || 0 = Khong]\n");
						printf_s("Moi nguoi dung nhap:");
						if (scanf_s("%d", &tiepTuc) != 1)
						{
							tiepTuc = 0;
						}
					} while (tiepTuc == 1);
					system("cls");
				}
			}
		} while (chon < 0 || chon > 10);
	} while (chon != 0);
}