#include "cArr.h"
#include <iostream>
using namespace std;

int main() {
    cArray arr;
    arr.Nhap();
    cout << "Danh sach cac phan tu: ";
    arr.Xuat();
    arr.checkInsDes();
    arr.findMinOdd();
    arr.findMaxEle();
    arr.countAppear();
    arr.InsertionSort();
    arr.SelectionSort();
    arr.HeapSort();
    arr.MergeSort();
    arr.QuickSort();
    return 0;
}
