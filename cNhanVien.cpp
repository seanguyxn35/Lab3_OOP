
#include <iostream>
#include <string>
#include "NhanVien.h"
using namespace std;
void NhanVien::Nhap() {
	cout<<"Nhap vao ma NV: ";
	cin>>maNV;
	cin.ignore();
	cout<<"Nhap vao ho ten: ";
	getline(cin,hoTen);
	cout<<"Nhap vao ngay thang nam sinh (dd/mm/yy): ";
	getline(cin,ngaySinh);
	cout<<"Nhap vao so luong san pham: ";
	cin>>soLuongSP;
	cout<<"Nhap vao don gia: ";
	cin>>donGia;
}

void NhanVien::Xuat() {
	cout << "Ma NV: " << maNV;
	cout << "\nHo ten: " << hoTen;
	cout << "\nNgay sinh: " << ngaySinh;
	cout << "\nLuong: " << getLuong() << endl;
}

int NhanVien::getLuong() {
	return soLuongSP * donGia;
}

int NhanVien::getAge() {
	int ngay, thang, nam;
	sscanf(ngaySinh.c_str(), "%d/%d/%d", &ngay, &thang, &nam);
	return 2025 - nam;
}

string NhanVien::getName() {
	return hoTen;
}
