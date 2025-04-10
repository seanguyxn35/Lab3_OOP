#include "DaGiac.h"
#include <iostream>
#include <cmath>

using namespace std;

cDaGiac::cDaGiac() {
    soDinh = 0;
    dinh = nullptr;
}

cDaGiac::~cDaGiac() {
    delete[] dinh;
}

void cDaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> soDinh;
    dinh = new Diem[soDinh];
    for (int i = 0; i < soDinh; ++i) {
        cout << "Nhap dinh thu " << i + 1 << ":\n";
        dinh[i].Nhap();
    }
}

void cDaGiac::Xuat() const {
    cout << "Da giac co " << soDinh << " dinh:\n";
    for (int i = 0; i < soDinh; ++i) {
        cout << "Dinh " << i + 1 << ": ";
        dinh[i].Xuat();
        cout << endl;
    }
}

double cDaGiac::TinhChuVi() const {
    double chuVi = 0;
    for (int i = 0; i < soDinh; ++i) {
        chuVi += dinh[i].KhoangCach(dinh[(i + 1) % soDinh]);
    }
    return chuVi;
}

// Diện tích dùng công thức shoelace (áp dụng cho đa giác lồi)
double cDaGiac::TinhDienTich() const {
    double sum = 0;
    for (int i = 0; i < soDinh; ++i) {
        int j = (i + 1) % soDinh;
        sum += dinh[i].getX() * dinh[j].getY() - dinh[j].getX() * dinh[i].getY();
    }
    return abs(sum) / 2;
}

void cDaGiac::TinhTien(double x, double y) {
    for (int i = 0; i < soDinh; ++i) {
        dinh[i].TinhTien(x, y);
    }
}

void cDaGiac::PhongToThuNho(double scale) {
    for (int i = 0; i < soDinh; ++i) {
        dinh[i].PhongToThuNho(scale);
    }
}

void cDaGiac::Quay(double theta) {
    for (int i = 0; i < soDinh; ++i) {
        dinh[i].Quay(theta);
    }
}
