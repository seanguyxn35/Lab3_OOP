#pragma once
#include <vector>
using namespace std;
class cArray{
    int n;
    vector<int> arr;
    public:
    void Nhap();
    void Xuat();
    void countAppear();
    void checkInsDes();
    void findMinOdd();
    void findMaxEle();
    void SelectionSort();
    void InsertionSort();
    void QuickSort();
    void MergeSort();
    void HeapSort();
};
