//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class phanso{
	int ts,ms;
	public:
	friend istream &operator>>(istream &is, phanso &obj);
    friend ostream &operator<<(ostream &os, phanso obj);		

};

istream &operator>>(istream &is, phanso &obj)
    {
        cout << "Nhap tu so: ";
        is >> obj.ts;
        cout << "Nhap mau so: ";
        is >> obj.ms;
        return is;
    }
ostream &operator<<(ostream &os, phanso obj)
    {
        os << obj.ts << "/" << obj.ms << endl;
        return os;
    }
int main()
{
    phanso a;
    cin >> a;
    cout << a;
}

