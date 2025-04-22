#pragma once
#include<string>
using namespace std;

class NhanVien {
	string maNV;
	string hoTen;
	string ngaySinh;
	int soLuongSP;
	int donGia;

public:
	void Nhap();
	void Xuat();
	int getLuong();
	int getAge();
	string getName();
};
