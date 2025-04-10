#include <iostream>
#include "cDSPhanSo.h"
using namespace std;

int main() {
    cDSPhanSo ds;
    ds.NhapDS();
    cout << "\nDanh sach da nhap:\n";
    ds.XuatDS();

    cout << "\n";
    ds.timMax();
    ds.timMin();
    ds.sntTuMax();

    cout << "\nSap xep tang:\n";
    ds.sxTang();

    cout << "\nSap xep giam:\n";
    ds.sxGiam();

    return 0;
}
