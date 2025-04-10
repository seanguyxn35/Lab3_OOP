#include "cDSPhanSo.h"
#include <iostream>
#include <algorithm>
using namespace std;

void cDSPhanSo::NhapDS() {
    cout << "Nhap vao so luong phan tu: ";
    cin >> n;
    DS = new PhanSo[n];
    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan so thu " << i + 1 << endl;
        DS[i].Nhap();
    }
}

void cDSPhanSo::XuatDS() {
    cout << "Danh sach phan so: " << endl;
    for (int i = 0; i < n; ++i) {
        DS[i].Xuat();
    }
}

void cDSPhanSo::timMax() {
    int vt = 0;
    for (int i = 1; i < n; ++i) {
        if (DS[i].getValue() > DS[vt].getValue()) vt = i;
    }
    cout << "Phan so lon nhat: ";
    DS[vt].Xuat();
}

void cDSPhanSo::timMin() {
    int vt = 0;
    for (int i = 1; i < n; ++i) {
        if (DS[i].getValue() < DS[vt].getValue()) vt = i;
    }
    cout << "Phan so nho nhat: ";
    DS[vt].Xuat();
}

void cDSPhanSo::sntTuMax() {
    int vt = -1;
    for (int i = 0; i < n; i++) {
        if (snt(DS[i].getTu())) {
            if (vt == -1 || DS[i].getTu() > DS[vt].getTu()) {
                vt = i;
            }
        }
    }
    if (vt == -1) {
        cout << "Khong co tu so nao la snt." << endl;
        return;
    }
    cout << "Phan so co tu so la snt lon nhat la: ";
    DS[vt].Xuat();
}

void cDSPhanSo::sxTang() {
    for (int i = 0; i < n; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (DS[j].getValue() < DS[min].getValue()) {
                min = j;
            }
        }
        swap(DS[i], DS[min]);
    }
    cout << "DS sau khi sap xep tang: " << endl;
    XuatDS();
}

void cDSPhanSo::sxGiam() {
    for (int i = 0; i < n; ++i) {
        int max = i;
        for (int j = i + 1; j < n; ++j) {
            if (DS[j].getValue() > DS[max].getValue()) {
                max = j;
            }
        }
        swap(DS[i], DS[max]);
    }
    cout << "DS sau khi sap xep giam: " << endl;
    XuatDS();
}
