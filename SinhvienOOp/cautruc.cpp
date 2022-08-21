//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class SV
{
	private:
		int MSV_;
		string name_;
		int day_;
		int month_;
		int years_;
		bool sex_;
		string address_;
	public:
		SV(){	;	};
		SV( unsigned int MSV, string name, unsigned int day, unsigned int month, unsigned int years, bool sex, string address );
		~SV(){	;	};
		unsigned int get_MSV() const {return MSV_;}
    	string get_name() const { return name_;}
    	unsigned int get_day() const {return day_;}
    	unsigned int get_month() const {return month_;}
    	unsigned int get_years() const {return years_;}
    	bool get_sex() const { return sex_;}
 		string get_address() const { return address_;}
   		 void ShowInfo()
   		{
   			cout<<setw(5)<<MSV_<<setw(20)<<name_.c_str()<<setw(15)<<day_<<"/"<<month_<<"/"<<years_<<setw(20)<<((sex_ == 1) ? "Male" : "Female")<<setw(15)<<address_.c_str()<<endl;
   		}
};

SV::SV(unsigned int MSV, string name, unsigned int day, unsigned int month, unsigned int years, bool sex, string address ){
	MSV_=MSV;
	name_=name;
	day_=day;
	month_=month;
	years_=years;
	sex_=sex;
	address_=address;
}

