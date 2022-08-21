//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
struct TuDien
{
	string Anh;
	string Viet;
	string Loai;
};

class Node
{
	TuDien Data;
	Node *L;
	Node *R;
};
class BSTree{
	Node* Pnode;
	public:
		void Init()
{
	Pnode=NULL;
}

int Empty(Node T)
{
	if(Pnode==NULL)
	return 1;
	return 0;
}

Node GetNode(TuDien x)
{
	Node p=new Node;
	p->Data=x;
	p->L=p->R=NULL;
	return p;
}

void InputA(Node &T,TuDien x)
{
	if(Empty(T)==1)
	{
		T=GetNode(x);
	}
	else
	{
	if(x.Anh==T->Data.Anh)
	{
		cout<<"\nTu Nay Da Co, Moi Nhap Lai ";
	}
	else{
	if(x.Anh<T->Data.Anh)
		InputA(T->L,x);
	else
		InputA(T->R,x);
		}
	}
}

void docfileltu(ifstream &filein, TuDien& x){
		getline(filein, x.Anh,',');
		getline(filein, x.Viet,',');
		getline(filein, x.Loai);
}
			
void doc_file(ifstream &filein, Node &T){
		while(!filein.eof()){
	    TuDien a;
	    docfileltu(filein,a);
	    InputA(T,a);
	}
}

void AddNew(Node &T,TuDien x)
{
	do
	{
		cout<<"\nNhap Tu Can Them (Khong Nhap Nua Thi An phim Enter) ";
		getline(cin,x.Anh);
		if(x.Anh=="")return ;
		cout<<"Nhap Nghia: ";
		getline(cin,x.Viet);
		cout<<"Nhap Loai Tu: ";
		getline(cin,x.Loai);
		InputA(T,x);
	}
	while(x.Anh!="");
}

void WriteA(Node &T,ofstream &fileout)
{
	if(T!=NULL)
	{
		WriteA(T->L,fileout);
		fileout<<T->Data.Anh<<endl;
		WriteA(T->R,fileout);
	}
}

void TraTuA(Node T,TuDien x)
{
	if(T!=NULL)
	{
	if(T->Data.Anh==x.Anh)
	{
		cout<<"Nghia Cua Tu: "<<T->Data.Viet;
		cout<<"\nLoai Cua Tu: "<<T->Data.Loai;
	return;
	}
	if(T->Data.Anh>x.Anh)
		TraTuA(T->L,x);
	else
		TraTuA(T->R,x);
	}
	else
		cout<<"Khong Tim Duoc Tu Can Tra";
}

Node Search(Node T,TuDien x)
{
	Pnode p=T;
	while(p!=NULL)
	{
	if(x.Anh==p->Data.Anh)
		return p;
	else
	{
	if(x.Anh<p->Data.Anh)
		p=p->L;
	else
		p=p->R;
		}
	}
	return NULL;
}

void SearchF(Node &p,Node &q)
{
	if(q->L)
		SearchF(p,q->L);
	else
	{
		p->Data=q->Data;
		p=q;
		q=q->L;
	}
}

int Del(Node &T, TuDien x)
{
	if(T==NULL)
	{
		cout<<"\nTu Dien Trong";
		return 0;
	}
	if(Search(T,x)!=NULL)
	{
	if(T->Data.Anh>x.Anh)
		Del(T->L,x);
	if(T->Data.Anh<x.Anh)
		Del(T->R,x);
		Pnode p=T;
	if(T->L==NULL)
		T=T->R;
	else if(T->R==NULL)
		T=T->L;
	else
	{
		SearchF(p,T->R);
		delete p;
	}
		return 1;
	}
	else
	{
		cout<<"\nKhong Tim Thay Du Lieu";
		return 0;
	}
}

void SuaA(Node &T,TuDien x)
{
	cout<<"\nNhap Tu Can Cap Nhat: ";
	getline(cin,x.Anh);
	if((Del(T,x))==0)return;
	else
	{
		AddNew(T,x);
		cout<<"\nTu Da Duoc Chinh Sua";
	}
}

};



void menu()
{
	Pnode T;
	Init(T);
	TuDien x;
	ifstream filein;
	filein.open("tudien.txt", ios::in);
	ofstream fileout;
	fileout.open("output.txt", ios::out);
char chon;
do
{
	cout<<"\n\t\t\t====Tu-Dien-Anh-Viet====";
	cout<<"\nNhan Phim ESC De Thoat";
	cout<<"\nPhim 1: Doc Tu Dien Tu File";
	cout<<"\nPhim 2: Ghi Tu Dien Vao File(LNR)";
	cout<<"\nPhim 3: Them Tu";
	cout<<"\nPhim 4: Xoa Mot Tu";
	cout<<"\nPhim 5: Cap Nhap Mot Tu";
	cout<<"\nPhim 6: Tim Kiem Mot Tu";
	chon=getch();
switch(chon)
{
	case 27: 
		cout<<"\n\n\t\t\t\t\t_________________Exit_________________\n";
		break;
	case '1':
		if(filein.is_open())
		{
			cout<<"\nMo File thanh cong!!"<<endl;
		}
		else
		{
			cout<<"\nMo File that bai!!"<<endl;
		}
		doc_file(filein,T); 
		break;
	case '2':
		if(fileout.is_open())
		{
			cout<<"\nGhi File thanh cong!!"<<endl;
		}
		else
		{
			cout<<"\nGhi File that bai!!"<<endl;
		}
		WriteA(T,fileout); 
		break;
	case '3':
		AddNew(T,x);
		break;
	case '4':
		cout<<"\nNhap Tu Can Xoa: ";
		getline(cin,x.Anh);
		Del(T,x);
		cout<<"\nThao Tac Hoan Thanh!";
		getch();
		break;
	case '5':
		SuaA(T,x);
		getch();
		break;
	case '6':
		cout<<"\nNhap Tu Can Tra: ";
		getline(cin,x.Anh);
		TraTuA(T,x);
		getch();
		break;
		default:
		cout<<"\nKhong tim thay yeu cau vui long nhap lai!";
		getch();
		break;
		}
	}while(chon!=27);
}
int main()
{
	menu();
}
