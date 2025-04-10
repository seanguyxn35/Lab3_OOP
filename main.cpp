#include "DaGiac.h"

int main() {
    cDaGiac dg;
    dg.Nhap();
    dg.Xuat();
    cout << "Chu vi: " << dg.TinhChuVi() << endl;
    cout << "Dien tich: " << dg.TinhDienTich() << endl;

    cout << "\nTinh tien da giac (2, 3):\n";
    dg.TinhTien(2, 3);
    dg.Xuat();

    cout << "\nPhong to da giac (2 lan):\n";
    dg.PhongToThuNho(2);
    dg.Xuat();

    cout << "\nQuay da giac 90 do:\n";
    dg.Quay(M_PI / 2); // 90 độ
    dg.Xuat();

    return 0;
}
