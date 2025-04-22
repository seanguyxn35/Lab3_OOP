#include "cNhanVienSX.h"
using namespace std;
#include <iostream>
#include <string>

cNhanVienSX::cNhanVienSX() {
	DS = nullptr;
	n = 0;
}

cNhanVienSX::~cNhanVienSX() {
	delete[] DS;
}

void cNhanVienSX::NhapDS() {
	cout<<"Nhap vao so luong nhan vien: ";
	cin>>n;
	DS = new NhanVien[n];
	for(int i=0; i<n; ++i) {

		DS[i].Nhap();
	}
	cout<<endl;
}

void cNhanVienSX::XuatDS() {
	cout<<"DANH SACH NHAN VIEN: \n";
	for(int i=0; i<n; ++i) {
		DS[i].Xuat();
	}
}

void cNhanVienSX::TongLuong() {
	int sum = 0;
	for(int i=0; i<n; ++i) {
		sum += DS[i].getLuong();
	}
	cout<<"TONG SO LUONG: "<<sum<<endl;
}

void cNhanVienSX::LuongThapNhat() {
	int minLuong = DS[0].getLuong(), index = 0;
	for(int i=1; i<n; ++i) {
		if(DS[i].getLuong() < minLuong) {
			minLuong = DS[i].getLuong();
			index = i;
		}
	}
	cout<<"NHAN VIEN CO LUONG THAP NHAT: "<<DS[index].getName()<<": "<<DS[index].getLuong()<<endl;
}

void cNhanVienSX::TuoiCaoNhat() {
	int maxAge = DS[0].getAge(), index = 0;
	for(int i=1; i<n; ++i) {
		if(DS[i].getAge() > maxAge) {
			maxAge = DS[i].getAge();
			index = i;
		}
	}
	cout<<"NHAN VIEN LON TUOI NHAT: "<<DS[index].getName()<<endl;
}

void cNhanVienSX::sortDS() {
	int min;
	for(int i=0; i<n-1; ++i) {
		min = i;
		for(int j=i+1; j<n; ++j) {
			if(DS[j].getLuong() < DS[min].getLuong()) min = j;
		}
		if(i != min) {
			swap(DS[i], DS[min]);
		}
	}
	cout<<"DANH SACH SAU KHI SAP XEP: \n";
	XuatDS();
}
