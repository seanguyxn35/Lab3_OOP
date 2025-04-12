#include <iostream>
using namespace std;
#include "cDaThuc.h"
int main(){
    cDaThuc A, B;
    A.Nhap();
    B.Nhap();
    cout << "Da thuc A: ";
    A.Xuat();
    cout << "Da thuc B: ";
    B.Xuat();
    cout<<"Tinh da thuc A theo x\n";
    A.TinhDaThucTheoX();
    cout<<"Tinh da thuc B theo x\n";
    B.TinhDaThucTheoX();
    cout<<"Hai da thuc cong lai: ";
    (A+B).Xuat();
    cout<<"Hai da thuc tru nhau: ";
    (A-B).Xuat();
}
