#include "PhanSo.h"
#include <cmath>
using namespace std;

void PhanSo::Nhap() {
    cout << "Nhap vao tu va mau: ";
    cin >> tu >> mau;
    while (mau == 0) {
        cout << "Mau so phai khac 0. Nhap lai mau: ";
        cin >> mau;
    }
}

void PhanSo::Xuat() {
    cout << tu << "/" << mau << endl;
}

double PhanSo::getValue() {
    return (double)tu / mau;
}

int PhanSo::getTu() {
    return tu;
}

bool snt(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) return false;
    }
    return true;
}
