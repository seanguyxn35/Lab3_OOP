#pragma once
#include <iostream>
#include <string>
using namespace std;

class Candidate {
public:
    string MaHs;
    string Ten;
    string Birth;
    float toan, van, anh;

    void Nhap();
    void Xuat();
    float TongDiem();
};
