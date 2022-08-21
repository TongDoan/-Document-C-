//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
/*Heap Sort*/
using namespace std;

void heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
    if (l < n && arr[l] < arr[largest]) 
        largest = l; 
  
    if (r < n && arr[r] < arr[largest]) 
        largest = r; 
  
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
        heapify(arr, n, largest); 
    } 
} 
  

void heapSort(int arr[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (int i=n-1; i>0; i--) 
    { 
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0); 
    } 
} 
  

int main() 
{ 
    int arr[100],n;
    cout<<"Nhap so phan tu Array: ";
    cin>>n;
    for(int i=0;i<n;i++){
    	cout<<"\nNhap phan thu "<<i+1<<": ";
    	cin>>arr[i];
	}
	cout <<"\nArray: ";
	for (int i=0; i<n; ++i){
		cout << arr[i] << " "; 
	}

    heapSort(arr, n); 
    
    cout <<"\nSau khi sap xep array: ";
    for (int i=0; i<n; ++i){
    	cout << arr[i] << " "; 
	}
         
} 
