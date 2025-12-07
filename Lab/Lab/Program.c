#include <stdio.h>
#include <string.h>

#define MAX 100

// Khai báo cấu trúc SinhVien
struct SinhVien {
    char mssv[15];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

int main() {
    struct SinhVien mangSV[MAX];  // Mảng lưu tối đa 100 sinh viên
    int n, i;

    // Nhập số lượng sinh viên muốn thêm
    printf("Nhap so luong sinh vien muon them: ");
    scanf("%d", &n);
    
    // Kiểm tra số lượng hợp lệ
    while (n <= 0 || n > MAX) {
        printf("So luong khong hop le! Vui long nhap lai (1 - %d): ", MAX);
        scanf("%d", &n);
    }

    // Nhập thông tin từng sinh viên
    for (i = 0; i < n; i++) {
        printf("\n--- Nhap thong tin sinh vien thu %d ---\n", i + 1);
        
        printf("Nhap ma so sinh vien: ");
        scanf(" %[^\n]%*c", mangSV[i].mssv);  // Đọc cả dấu cách
        
        printf("Nhap ho va ten sinh vien: ");
        scanf(" %[^\n]%*c", mangSV[i].tenSV);
        
        printf("Nhap nganh hoc: ");
        scanf(" %[^\n]%*c", mangSV[i].nganhHoc);
        
        printf("Nhap diem trung binh: ");
        scanf("%f", &mangSV[i].diemTB);
    }

    // Xuất thông tin tất cả sinh viên
    printf("\n\n==========================================\n");
    printf("          DANH SACH SINH VIEN           \n");
    printf("==========================================\n");
    printf("%-15s %-25s %-20s %-10s\n", "MSSV", "Ho va ten", "Nganh hoc", "Diem TB");
    printf("---------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-15s %-25s %-20s %-10.2f\n", 
               mangSV[i].mssv, 
               mangSV[i].tenSV, 
               mangSV[i].nganhHoc, 
               mangSV[i].diemTB);
    }
    printf("==========================================\n");

    return 0;
}
// sap xep
//#include <stdio.h>
//
//#include <string.h>

//#define MAX 100

// Khai báo cấu trúc SinhVien (giống bài 1)
struct SinhVien {
    char mssv[15];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

int main() {
    struct SinhVien mangSV[MAX];
    int n, i, j;

    // ================== NHẬP DỮ LIỆU (từ bài 1) ==================
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    while (n <= 0 || n > MAX) {
        printf("So luong khong hop le! Nhap lai (1-%d): ", MAX);
        scanf("%d", &n);
    }

    for (i = 0; i < n; i++) {
        printf("\n--- Sinh vien thu %d ---\n", i + 1);
        printf("MSSV: ");
        scanf(" %[^\n]%*c", mangSV[i].mssv);
        printf("Ho va ten: ");
        scanf(" %[^\n]%*c", mangSV[i].tenSV);
        printf("Nganh hoc: ");
        scanf(" %[^\n]%*c", mangSV[i].nganhHoc);
        printf("Diem TB: ");
        scanf("%f", &mangSV[i].diemTB);
    }

    // ================== SẮP XẾP THEO ĐIỂM TĂNG DẦN ==================
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (mangSV[j].diemTB > mangSV[j + 1].diemTB) {
                // Tạo biến tạm để hoán vị toàn bộ thông tin sinh viên
                struct SinhVien temp = mangSV[j];
                mangSV[j] = mangSV[j + 1];
                mangSV[j + 1] = temp;
            }
        }
    }

    // ================== XUẤT KẾT QUẢ SAU KHI SẮP XẾP ==================
    printf("\n\n================================================\n");
    printf("     DANH SACH SINH VIEN SAU KHI SAP XEP TANG DAN THEO DIEM\n");
    printf("================================================\n");
    printf("%-12s %-25s %-20s %-10s\n", "MSSV", "Ho va ten", "Nganh hoc", "Diem TB");
    printf("------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-12s %-25s %-20s %8.2f\n",
            mangSV[i].mssv,
            mangSV[i].tenSV,
            mangSV[i].nganhHoc,
            mangSV[i].diemTB);
    }
    printf("================================================\n");

    return 0;
}