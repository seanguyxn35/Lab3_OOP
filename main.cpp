#include "Diem.h"
#include "TamGiac.h"

int main() {
    Diem a;
    a.Nhap();
    a.Xuat();
    Diem b(3, 4);
    double kc = a.KhoangCach(b);
    cout << "\nKhoang cach: " << kc << endl;

    TamGiac tg;
    tg.Nhap();
    tg.Xuat();
    cout << "Loai tam giac: " << tg.KiemTraLoai() << endl;
    cout << "Chu vi: " << tg.TinhChuVi() << endl;
    cout << "Dien tich: " << tg.TinhDienTich() << endl;

    tg.TinhTien(1, 2);
    tg.Xuat();

    tg.PhongTo(2);
    tg.Xuat();

    tg.Quay(90);
    tg.Xuat();

    return 0;
}
