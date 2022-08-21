//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class Sach{
	int ms,namxb;
	string tens,tentg;
	public:
		Sach(){
			
		}
		void nhap(){
			cout<<"nhap ma sach :",cin>>ms;
			cin.ignore();
			cout<<"nhap ten sach :";getline(cin,tens);
			cout<<"nhap ten tac gia :";getline(cin,tentg);
			cout<<"nhap nam xuat ban :";cin>>namxb;
			
		}
		void xuat(){
			cout<<" ma sach :"<<ms;
			cout<<"\nTen sach :"<<tens;
			cout<<"\nTen tac gia :"<<tentg;
			cout<<"\nNsam xuat ban :"<<namxb;
		}
		string getTens(){
			return tens;
		}
		int getNamxb(){
			return namxb;
		}
};
int main(){
	int n;
	cout<<"Nhap so sach :";cin>>n;
	Sach S[100];
	for(int i=1;i<=n;i++)
	{
		cout<<"\nThong tin sach  thu "<<i<<" : \n ";
		S[i].nhap();
	}
	string name;
	cout<<"\nNhap 1 ten sach bat ky : ";
	cin>>name;
	for(int i=1;i<=n;i++)
	{
	   if(S[i].getTens()==name)
	   {
	   	S[i].xuat();
	   }
	  	else
	  	   	cout<<"\nTen sach khong phu hop !";
	   		
	}
	
for(int i=1;i<=n;i++)
{
	if(S[i].getNamxb()<2000)
	{
		cout<<"\nNhung sach trc 2000 la :";
		S[i].xuat();
	}
}
    
}
