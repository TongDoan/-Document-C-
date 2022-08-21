//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class Date{
	int year;
	int month;
	int date;
	public:
		Date(){	}
		Date(int a, int b, int c){
			date=a, month=b, year=c;
		}	
		void input();
		void output();
		void isvalid();
		void nextday(Date& p);
		int tinhngay(Date aa);
};

void Date::input(){
	cout<<"\nNhap Date/Month/Year: ";
	cin>>date>>month>>year;
}

void Date::output(){
	cout<<date<<"/"<<month<<"/"<<year;
}

void Date::isvalid(){
	if(date < 31 && month <12 && year <3000){
		cout<<"\nInvalid";
	}
	else{
		cout<<"\nIllegal";
	}
}

void Date::nextday(Date& p){

	if(date == 31 && month ==12){
		p.date=1;
		p.month=1;
		p.year= year+1;
	}
	else if(date == 31){
		p.date=1;
		p.month=month +1;
		p.year= year;
	}
	else{
		p.date= date+1;
		p.month= month;
		p.year=year;
	}
}

int Date::tinhngay(Date aa){
	int d= abs(aa.date - date);
	int m=abs(aa.month - month);
	int y= abs(aa.year - year);
	return d + m*31 + y*365;
}

int main()
{
	Date a,b,c(12,8,2021),d(5,7,2021);
	a.input();
	a.output();
	a.isvalid();
	a.nextday(b);
	cout<<"\nNgay tiep theo la: ";
	b.output();
	cout<<"\nSo ngay la: "<<c.tinhngay(d);
}

