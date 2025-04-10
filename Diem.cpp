#include "Diem.h"

Diem::Diem() {
    dx = 0;
    dy = 0;
}

Diem::Diem(double x, double y) {
    dx = x;
    dy = y;
}

void Diem::Nhap() {
    cout << "Nhap x: "; cin >> dx;
    cout << "Nhap y: "; cin >> dy;
}

void Diem::Xuat() const {
    cout << "(" << dx << ", " << dy << ")";
}

double Diem::getX(){
return dx;
}
double Diem::getY(){
    return dy;
}
double Diem::KhoangCach(const Diem& a) const {
    return sqrt(pow(dx - a.dx, 2) + pow(dy - a.dy, 2));
}

void Diem::TinhTien(double x, double y) {
    dx += x;
    dy += y;
}

void Diem::PhongToThuNho(double scale) {
    dx *= scale;
    dy *= scale;
}

void Diem::Quay(double theta) {
    double rad = theta * M_PI / 180.0;
    double cosTheta = cos(rad);
    double sinTheta = sin(rad);
    double xNew = dx * cosTheta - dy * sinTheta;
    double yNew = dx * sinTheta + dy * cosTheta;
    dx = xNew;
    dy = yNew;
}
