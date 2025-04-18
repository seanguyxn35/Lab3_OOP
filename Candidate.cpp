#include "Candidate.h"

void Candidate::Nhap() {
    cout << "Nhap vao ma HS: ";
    cin >> MaHs;
    cin.ignore();
    cout << "Nhap ten HS: ";
    getline(cin, Ten);
    cout << "Nhap vao ngay thang nam sinh: ";
    getline(cin, Birth);
    cout << "Nhap vao lan luot diem Toan Van Anh: ";
    cin >> toan >> van >> anh;
}

void Candidate::Xuat() {
    cout << "Ma Hs: " << MaHs << endl;
    cout << "Ten Hs: " << Ten << endl;
    cout << "Ngay sinh: " << Birth << endl;
    cout << "Diem Toan, Van, Anh: " << toan << " " << van << " " << anh << endl;
    cout << "Tong diem: " << TongDiem() << endl;
    cout << "-------------------\n";
}

float Candidate::TongDiem() {
    return toan + van + anh;
}
