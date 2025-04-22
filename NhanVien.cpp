#include "NhanVien.h"
using namespace std;
#include <iostream>
void NhanVien::Nhap() {
	cout<<"Nhap vao ma NV: ";
	cin>>maNV;
	cin.ignore();
	cout<<"Nhap vao ho ten: ";
	getline(cin,hoTen);
	cout<<"Nhap vao ngay thang nam sinh (dd/mm/yy): ";
	getline(cin,ngaySinh);
	cout<<"Nhap vao luong: ";
	cin>>luong;
}
void NhanVien::Xuat() {
	cout << "Ma NV: " << maNV;
	cout << "\nHo ten: " << hoTen;
	cout << "\nNgay sinh: " << ngaySinh;
	cout << "\nLuong: " << luong << endl;
}
int NhanVien::getLuong() {
	return this->luong;
}
int NhanVien::getAge() {
	int ngay, thang, nam;

	sscanf(ngaySinh.c_str(), "%d/%d/%d", &ngay, &thang, &nam);
	return 2025-nam;
}

string NhanVien::getName() {
	return this->hoTen;
}
