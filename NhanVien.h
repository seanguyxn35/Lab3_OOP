#pragma once
using namespace std;
#include <string>
class NhanVien {
	string maNV;
	string hoTen;
	string ngaySinh;
	int luong;

public:
	void Nhap();
	void Xuat();
	int getLuong();
	int getAge();
	string getName();

};
