#include "cCandidate.h"
#include <fstream>
#include <algorithm>

cCandidate::cCandidate(){
    n=0;
    DS= nullptr;
}
cCandidate::~cCandidate(){
    delete[]DS;
}
void cCandidate::NhapDS(){
    cout<<"Nhap vao so luong thi sinh: ";
    cin>>n;
    DS = new Candidate[n];
    for(int i=0;i<n;++i){
        cout<<"Nhap vao thong tin cua thi sinh thu "<<i+1<<endl;
        DS[i].Nhap();
        cout<<"-------------------\n";
    }
}
void cCandidate::XuatDS(){
    for(int i=0;i<n;i++){
        DS[i].Xuat();
    }
}
void cCandidate::XuatThiSinhDiemCao(){
    bool found= false;
    cout<<"Danh sach thi sinh diem cao"<<endl;
    for(int i=0;i<n;++i){
        if(DS[i].TongDiem() >15) {
            DS[i].Xuat();
            found = true;
        }
    }
    if(!found) cout<<"Empty"<<endl;
}
void cCandidate::ThiSinhDiemCaoNhat(){
    cout<<"Diem cao nhat: "<<endl;
    int maxDiem=0;
    for(int i=0;i<n;++i){
        if(DS[i].TongDiem() > maxDiem) maxDiem = DS[i].TongDiem();
    }
    for(int i=0;i<n;++i){
        if(DS[i].TongDiem() == maxDiem) DS[i].Xuat();
    }
}
void cCandidate::SapXepDiemGiamDan(){
    int min;
    for(int i=0;i<n-1;i++){
        min =i;
        for(int j=i+1;j<n;++j){
            if(DS[j].TongDiem() < DS[min].TongDiem()) min= j;
        }
        if(min != i){
            swap(DS[i], DS[min]);
        }
    }
    cout<<"Danh sach sau khi da sap xep: \n";
    XuatDS();
}
