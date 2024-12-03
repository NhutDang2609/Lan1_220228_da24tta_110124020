#include <stdio.h>

#define days 7  

void nhapThoiGianHoc(float Gio[days]);
void hienThiThoiGianHoc(float Gio[days]);
void thongKeThoiGianHoc(float Gio[]);
void phanTichHieuQuaHocTap(float Gio[], float mucTieu);

int main() 
{
    float Gio[days];
    float mucTieu;

    // Goi ham cau 1
    nhapThoiGianHoc(Gio);

    // Goi ham cau 2
    hienThiThoiGianHoc(Gio);

    // Goi ham cau 3
    thongKeThoiGianHoc(Gio);

    // Goi ham cau 4
    printf("\nNhap muc tieu so gio hoc moi ngay: ");
    scanf("%f", &mucTieu);
    phanTichHieuQuaHocTap(Gio, mucTieu);

    return 0;
}

void nhapThoiGianHoc(float Gio[]) 
{
    for (int i = 0; i < days; i++) 
	{
        do {
            printf("Nhap thoi gian hoc ngay thu: %d (0 <= gia tri <= 15.0): ", i + 1);
            scanf("%f", &Gio[i]);
            if (Gio[i] < 0 || Gio[i] > 15.0) {
                printf("Thoi gian khong hop le, nhap lai\n");
            }
        } while (Gio[i] < 0 || Gio[i] > 15.0);
    }
}

void hienThiThoiGianHoc(float Gio[]) 
{
    const char *soNgayTrongTuan[] = {"Thu 2", "Thu 3", "Thu 4", "Thu 5", "Thu 6", "Thu 7", "Chu Nhat"};
    for (int i = 0; i < days; i++) 
	{
        printf("%s: %.2f gio\n", soNgayTrongTuan[i], Gio[i]);
    }
}

void thongKeThoiGianHoc(float Gio[]) 
{
    float tong = 0;
    for (int i = 0; i < days; i++) 
	{
        tong += Gio[i];
    }
    printf("\nTong so gio hoc trong tuan: %.2f gio\n", tong);
    printf("Trung binh so gio hoc moi ngay: %.2f gio\n", tong / days);
}

void phanTichHieuQuaHocTap(float Gio[], float mucTieu) 
{
    int Dat = 0;
    for (int i = 0; i < days; i++) 
	{
        if (Gio[i] >= mucTieu) 
		{
            Dat++;
        }
    }
    printf("\nSo ngay dat muc tieu: %.2f gio: %d ngay\n", mucTieu, Dat);
}

