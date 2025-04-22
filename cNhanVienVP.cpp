#include "cNhanVienVP.h"
using namespace std;
#include <iostream>
cNhanVienVP::cNhanVienVP() {
	DS = nullptr;
	n=0;
}

cNhanVienVP::~cNhanVienVP() {
	delete[]DS;
}
void cNhanVienVP::NhapDS() {
	cout<<"Nhap vao so luong nhan vien: ";
	cin>>n;
	DS= new NhanVien[n];
	for(int i=0; i<n; ++i) {
        DS[i].Nhap();
	}
	cout<<endl;
}
void cNhanVienVP::XuatDS() {
	cout<<"DANH SACH NHAN VIEN: \n";
	for(int i=0; i<n; ++i) {
        DS[i].Xuat();
	}
}
void cNhanVienVP::LuongCaoNhat() {
	int maxLuong=0, index;
	for(int i=0; i<n; ++i) {
		if(DS[i].getLuong() > maxLuong) {
			maxLuong= DS[i].getLuong();
			index=i;
		}
	}
	cout<<"NHAN VIEN CO LUONG CAO NHAT: "<<DS[index].getName()<<": "<<DS[index].getLuong()<<endl;
}
void cNhanVienVP::TuoiCaoNhat() {
	int maxAge=0, index;
	for(int i=0; i<n; ++i) {
		if(DS[i].getAge() > maxAge) {
			maxAge= DS[i].getAge();
			index=i;
		}
	}
	cout<<"NHAN VIEN LON TUOI NHAT: "<<DS[index].getName()<<" "<<DS[index].getAge()<<" tuoi\n";
}
void cNhanVienVP::TongLuong(){
    int sum=0;
    for(int i=0;i<n;++i){
        sum+=DS[i].getLuong();
    }
    cout<<"TONG SO LUONG: "<<sum<<endl;
}
void cNhanVienVP::sortDS() {
	int min;
	for(int i=0; i<n-1; ++i) {
		min =i;
		for(int j=i+1; j<n; ++j) {
			if(DS[j].getLuong() < DS[min].getLuong()) min =j;
		}
		if(i!=min) {
			swap(DS[i], DS[min]);
		}
	}
	cout<<"DANH SACH SAU KHI SAP XEP: \n";
	XuatDS();
}
