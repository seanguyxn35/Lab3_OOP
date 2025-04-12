#include "cArr.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <algorithm>

using namespace std;

void cArray::Nhap(){
    srand(time(0));
    cout<<"Nhap vao n phan tu: ";
    cin>>n;
    for(int i=0;i<n;++i){
        int x =rand()%100;
        arr.push_back(x);
    }
}
void cArray::countAppear(){
    int count =0,x;
    bool found=false;
    cout<<"Nhap vao so can tim: ";
    cin>>x;
    for(int i=0;i<n;++i){
        if(arr[i] == x){
            count++;
            found = true;
        }
    }
    if(!found){
        cout<<"Khong tim thay."<<endl;
        return;
    }
    cout<<"So lan xuat hien la: "<<count<<endl;
}
void cArray::Xuat(){

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void cArray::findMinOdd() {
    bool found = false;
    int min;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            if (!found || arr[i] < min) {
                min = arr[i];
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Khong co so le trong mang." << endl;
    } else {
        cout << "So le nho nhat la: " << min << endl;
    }
}
bool check(int x){
    if(x<2) return false;
    for(int i=2;i<sqrt(x);++i){
        if(x%i == 0) return false;
    }
    return true;
}
void cArray::findMaxEle(){
    bool found =false;
    int max;

    for(int i=0;i<n;++i){
        if(check(arr[i])){
            if(!found || arr[i] >max){
                max=arr[i];
                found =true;
            }
        }
    }
    if(!found) cout<<"Khong co so nguyen to nao trong mang."<<endl;
    else cout<<"So nguyen to lon nhat la: "<<max<<endl;

}
void cArray::checkInsDes(){
    bool tang=false, giam = false;
    for(int i=0;i<n-1;i++){
        if(arr[i] < arr[i+1]){
            tang = true;
        }
        if (arr[i] > arr[i+1]){
            giam = true;
        }
    }
    if(tang && giam) cout<<"Unordered"<<endl;
    else if(tang) cout<<"Increase"<<endl;
    else cout<<"Decrease"<<endl;
}
void cArray::SelectionSort(){
    int max, min;
    cout<<"Selection Sort tang dan: ";
    for(int i=0;i<n-1;++i){
        min = i;
        for(int j=i+1; j<n; ++j){
            if(arr[j] < arr[min]) min = j;
        }
        if(min != i ) swap(arr[min], arr[i]);
    }
    Xuat();
    cout<<"Selection Sort giam dan: ";
    for(int i=0;i<n-1;++i){
        max =i;
        for(int j=i+1;j<n;++j){
            if(arr[j] > arr[max]) max =j;
        }
        if(i!= max) swap(arr[max], arr[i]);
    }
    Xuat();
    cout<<endl;
}
int binarySearch(const vector<int>& arr, int key, int left, int right, bool Ascending){
    while (left <= right){
        int mid = left + (right - left) / 2;
        if ((Ascending && arr[mid] <= key) || (!Ascending && arr[mid] >= key)){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

void cArray::InsertionSort() {
    int key, pos;

    cout << "InsertionSort tang dan: ";
    for (int i = 1; i < n; ++i) {
        key = arr[i];
        pos = binarySearch(arr, key, 0, i - 1, true);

        // Dời các phần tử từ pos đến i-1 sang phải
        for (int j = i; j > pos; --j) {
            arr[j] = arr[j - 1];
        }
        arr[pos] = key;
    }
    Xuat();

    cout << "InsertionSort giam dan: ";
    for (int i = 1; i < n; ++i) {
        key = arr[i];
        pos = binarySearch(arr, key, 0, i - 1, false);

        for (int j = i; j > pos; --j) {
            arr[j] = arr[j - 1];
        }
        arr[pos] = key;
    }
    Xuat();
    cout << endl;
}

void quick(vector<int>& arr, int left, int right, bool type){
    if(left>= right) return;
    int key=arr[(right-left)/2 + left];
    int i=left, j=right;
    while(i<=j){
        while(type && arr[i] < key || !type && arr[i] > key) i++;
        while(type && arr[j] > key || !type && arr[j] < key) j--;
        if(i<=j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    quick(arr,left,j, type);
    quick(arr, i, right,type);
    return;
}
void cArray::QuickSort(){
    cout<<"QuickSort tang dan: ";
    quick(arr, 0, n-1, true);
    Xuat();
    cout<<"QuickSort giam dan: ";
    quick(arr, 0, n-1,false);
    Xuat();
    cout<<endl;
}

void heapify(vector<int> &arr, int n, int i, bool type){
    int largest= i;
    int left= 2*i+1;
    int right =2*i+2;

    if(left<n && ((type && arr[largest] < arr[left]) || (!type && arr[largest] > arr[left]))){
        largest = left;
    }
    if(right<n && ((type && arr[largest] < arr[right]) || (!type && arr[largest] > arr[right]))){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest, type);
    }
}
void cArray::HeapSort(){
    for(int i=n/2-1;i>=0;--i){
        heapify(arr, n, i, true);
    }
    for(int i=n-1;i>=0;--i){
        swap(arr[0], arr[i]);
        heapify(arr,i,0, true);
    }
    cout<<"HeapSort tang dan: ";
    Xuat();

    for(int i=n/2-1;i>=0;--i){
        heapify(arr, n, i, false);
    }
    for(int i=n-1;i>=0;--i){
        swap(arr[0], arr[i]);
        heapify(arr,i,0, false);
    }
    cout<<"HeapSort giam dan: ";
    Xuat();
    cout<<endl;
}

void merge(vector<int>& a, int left, int mid, int right, bool isAscending) {
	vector<int> x(a.begin() + left, a.begin() + mid + 1);
	vector<int> y(a.begin() + mid + 1, a.begin() + right + 1);
	int n1 = x.size(), i = 0, j = 0;
	int n2 = y.size();
	int index = left;

	while (i < n1 && j < n2) {
		if ((isAscending && x[i] <= y[j]) || (!isAscending && x[i] >= y[j])) {
			a[index++] = x[i++];
		} else {
			a[index++] = y[j++];
		}
	}

	while (i < n1) a[index++] = x[i++];
	while (j < n2) a[index++] = y[j++];
}
void mergeSort(vector<int>& a, int left, int right, bool isAscending) {
	if (left >= right) return;
	int mid = left + (right - left) / 2;

	mergeSort(a, left, mid, isAscending);
	mergeSort(a, mid + 1, right, isAscending);
	merge(a, left, mid, right, isAscending);
}

void cArray::MergeSort(){
    cout<<"MergeSort tang dan: ";
    mergeSort(arr,0,n-1,true);
    Xuat();
    cout<<"MergeSort giam dan: ";
    mergeSort(arr,0,n-1,false);
    Xuat();
    cout<<endl;
}
