#pragma once
#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu, mau;
public:
    void Nhap();
    void Xuat();
    double getValue();
    int getTu();
};
bool snt(int x);  // Khai báo nguyên mẫu hàm kiểm tra số nguyên tố
