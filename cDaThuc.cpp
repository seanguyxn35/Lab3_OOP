#pragma once
using namespace std;
#include <cmath>
#include <iostream>
#include "cDaThuc.h";
cDaThuc::cDaThuc(){
    n = 0;
    heSo = nullptr;
}
cDaThuc::~cDaThuc(){
    delete[] heSo;
}
void cDaThuc::Nhap() {
    cout << "Nhap vao bac cua da thuc: ";
    cin >> this->n;
    heSo = new double[n + 1];
    cout << "Nhap vao he so : ";
    for (int i = n; i >= 0; i--) {
        cin >> heSo[i];
    }
}

void cDaThuc::Xuat() {

    bool firstTerm = true;

    for (int i = n; i >= 0; i--) {
        if (heSo[i] == 0) continue;

        if (!firstTerm) {
            if (heSo[i] > 0) cout << " + ";
            else cout << " - ";
        } else {
            if (heSo[i] < 0) cout << "-";
            firstTerm = false;
        }

        if (abs(heSo[i]) != 1 || i == 0) cout << abs(heSo[i]);
        if (i > 0) cout << "x";
        if (i > 1) cout << "^" << i;
    }
    cout << endl;
}

void cDaThuc::TinhDaThucTheoX() {
    double x;
    cout << "Nhap gia tri x: ";
    cin >> x;

    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += heSo[i] * pow(x, i);
    }
    cout<<"Gia tri la: "<<sum<<endl;
}

cDaThuc cDaThuc::operator+(const cDaThuc& other) {
    int maxN = max(n, other.n);
    cDaThuc temp;
    temp.n = maxN;
    temp.heSo = new double[maxN + 1]();

    for (int i = 0; i <= n; i++) {
        temp.heSo[i] = heSo[i];
    }
    for (int i = 0; i <= other.n; i++) {
        temp.heSo[i] += other.heSo[i];
    }

    return temp;
}

cDaThuc cDaThuc::operator-(const cDaThuc& other) {
    int maxN = max(n, other.n);
    cDaThuc temp;
    temp.n = maxN;
    temp.heSo = new double[maxN + 1]();

    for (int i = 0; i <= n; i++) {
        temp.heSo[i] = heSo[i];
    }
    for (int i = 0; i <= other.n; i++) {
        temp.heSo[i] -= other.heSo[i];
    }

    return temp;
}
