#pragma once
using namespace std;
#include "NhanVien.h"

class cNhanVienVP {
private:
	NhanVien* DS;
	int n;

public:

	cNhanVienVP();
	~cNhanVienVP();
    void NhapDS();
    void XuatDS();
	void LuongCaoNhat();
	void TuoiCaoNhat();
	void TongLuong();
	void sortDS();

};
