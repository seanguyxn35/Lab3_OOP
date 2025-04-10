#pragma once
#include "Diem.h"

class cDaGiac {
private:
    int soDinh;
    Diem* dinh;

public:
    cDaGiac();
    ~cDaGiac();
    void Nhap();
    void Xuat() const;
    double TinhChuVi() const;
    double TinhDienTich() const; // Với giả định đa giác lồi
    void TinhTien(double x, double y);
    void Quay(double theta);
    void PhongToThuNho(double scale);
};
