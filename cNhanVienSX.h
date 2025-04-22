#pragma once
#include "NhanVien.h"
using namespace std;
class cNhanVienSX {
private:
	NhanVien* DS;
	int n;

public:
	cNhanVienSX();
	~cNhanVienSX();
	void NhapDS();
	void XuatDS();
	void LuongThapNhat();
	void TuoiCaoNhat();
	void TongLuong();
	void sortDS();
};
