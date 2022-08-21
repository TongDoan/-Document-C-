#include<iostream>
using namespace std;
class Student{
    int rollno;
	int marks;
public:
    void getinfo (){
	    cout << "Nhap vao ma so sinh vien: ";
		cin >> rollno ;
		cout << "Nhap vao diem: ";
		cin >> marks ;
	} 
	void display (){
	    cout<<rollno<<"\t"<<marks<< endl;
	} 
	int getmarks(){
	    return marks;
	} 
};
// ket thuc lop Student 
int main()
{
    Student stulist[100];
	float  total, average;
	int no, i;
	total = 0.0;
	cout << "\n Nhap vao so luong sinh vien: ";
	cin >> no ;
	for (i=0; i< no ; i++){
	    stulist[i].getinfo();
        total = total + stulist[i].getmarks();
	}
	cout << "Ma so Diem"<< endl;
	for (i=0; i< no; i++){
	    stulist[i].display();
	}
	average = total / no;
	cout << "Diem trung binh cac sinh vien = " << average;
}
