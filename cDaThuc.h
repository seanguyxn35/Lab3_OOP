#pragma once;
using namespace std;
class cDaThuc {
    int n;
    double* heSo;

public:
    cDaThuc();
    ~cDaThuc();
    void Nhap();
    void Xuat();
    void TinhDaThucTheoX();
    cDaThuc operator+(const cDaThuc& other);
    cDaThuc operator-(const cDaThuc& other);
};
