//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class sinhvien
{
private:  int dtoan,dly,dhoa;
          float dtb;
          string ht;
public:
    void nhap();
    float tinhdiemtrungbinh();
    void xuat();
};

void sinhvien::nhap(){
		cin.ignore();
		cout<<"\nnhap ho ten:";
		getline(cin,this->ht);
        cout<<"nhap diem toan:";
        cin>>dtoan;
        cout<<"nhap diem ly:";
        cin>>dly;
        cout<<"nhap diem hoa:";
        cin>>dhoa;
}
float sinhvien::tinhdiemtrungbinh(){
       	dtb=(float)(dtoan+dly+dhoa)/3;
        return dtb;
}

void sinhvien::xuat(){
		cout<<"\n"<<setw(25)<<ht<<setw(25)<<dtoan<<setw(15)<<dly<<setw(15)<<dhoa<<setw(15)<<dtb;
}

int main()
{
    sinhvien *sv;
    int n,i;
    do
    {
        cout<<"nhap so sinh vien: ";
        cin>>n;
    }
    while(n<0);
    sv=	new sinhvien[n];
    if(sv == NULL)
        cout<<"loi cap phat bo nho";
    else
        cout<<"\nStart";
    
    for(i=0;i<n;i++)
    {
        cout<<"\nNhap sinh vien thu: "<<i+1;
        sv[i].nhap();
        sv[i].tinhdiemtrungbinh();
    }
	cout<<"\n"<<setw(25)<<left<<"Hoten"<<setw(25)<<"Diemtoan"<<setw(15)<<"Diemly"<<setw(15)<<"Diemhoa"<<setw(15)<<"DienTB"<<endl;
	for(i=0;i<n;i++)
    {
        sv[i].xuat();
    }
	return 0;
}
