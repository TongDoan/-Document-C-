//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;

class MonHoc {
	private:
		string maMon, tenMon;
		int soTC;
	public:
		MonHoc(){}
		~MonHoc(){}
		void nhap()
		{
			cout << "\nNhap ma mon: ";
			cin.ignore(1);
			getline(cin, maMon);
			cout << "\nNhap ten mon: ";
			getline(cin, tenMon);
			cout << "\nNhap so tin chi: ";
			cin >> soTC;
		}
		void xuat()
		{
			cout << "\nMa mon: " << maMon;
			cout << "\nTen mon: " << tenMon;
			cout << "\nSo tin chi: " << soTC;
		}
		int laySoTc()
		{
			return soTC;
		}
		string layMaMon()
		{
			return maMon;
		}
};

class DKHP {
	private:
		string maSv, tenSv;
		MonHoc *a;
		int soMon;
		int tongTC;
	public:
		DKHP()
		{
			a = NULL;
		}
		~DKHP()
		{
			if (a)	delete []a;
		}
		void nhap()
		{
			cout << "\nNhap ma sinh vien: ";
			cin.ignore(1);
			getline(cin, maSv);
			cout <<  "\nTen sinh vien: ";
			getline(cin, tenSv);
			cout << "\nNhap so luong mon hoc ma sinh vien dang ki: ";
			cin >> soMon;
			a = new MonHoc[soMon];
			tongTC = 0;
			cout << "\nNhap cac mon hoc ma sinh vien dang ki: ";
			for (int i = 0; i < soMon; i++)
			{
				cout << "\nMon thu " << i+1;
				a[i].nhap();
				tongTC += a[i].laySoTc();
			}
		}
		int getTongTC()
		{
			return tongTC;	
		}
		int DkMamon(string ma)
		{
			for (int i = 0;  i < soMon; i++)
			{
				if (ma == a[i].layMaMon())
					return 1;
			}
			return 0;
		}
};

int main()
{
	int m;
	cout << "\nNhap so luong mon hoc m:  ";
	cin >> m;
	MonHoc *mon;
	mon = new MonHoc[m];
	cout << "\nNhap danh sach cac mon hoc: ";
	for (int i = 0; i < m; i++)
	{
		cout << "\nMon thu " << i+1;
		mon[i].nhap();
	}
	DKHP *dk;
	int n;
	cout << "\nNhap so luong sinh vien  = ";
	cin >> n;
	dk = new DKHP[n];
	cout << "\nNhap ban dang ki cua cac sinh vien: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\nSinh vien thu " << i+1;
		dk[i].nhap();
	}
	cout << "\nSo tin chi moi sinh vien da dang ki: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\nSinh vien thu " << i+1 << " : " << dk[i].getTongTC();
	}
	string ma;
	cout << "\nNhap vao 1 ma mon hoc: ";
	cin.ignore(1);
	getline(cin, ma);
	int dem = 0; 
	for (int i = 0; i < n; i++)
	{
		if (dk[i].DkMamon(ma))
			dem++;
	}
	cout << "\nSo sinh vien dang ki ma mon tren la: " << dem;
}

