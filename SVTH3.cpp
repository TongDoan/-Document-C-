#include <iostream>
using namespace std;
class Date {
	private:
		int nday;
		int nmonth;
		int nyear;
	public:
		void set_date()
		{
			cout << "\nNhap ngay: ";
			cin >> nday;
			cout << "\nNhap thang: ";
			cin >> nmonth;
			cout << "\nNhap nam: ";
			cin >> nyear;
		}
		int get_day()
		{
			return nday;
		}
		int get_month()
		{
			return nmonth;
		}
		int get_year()
		{
			return nyear;
		}
		void get_date()
		{
			cout << nday << "/" << nmonth << "/" << nyear;
		}
};
class Person: public Date {
	private:
		string name;
		Date dob;  // date of birth
	public:
		void set_person()
		{
			cout << "\nNhap ten: ";
			cin >> ws;
			getline(cin, name);
			set_date();
		}
		void get_person()
		{
			cout << "\nTen: ";
			cout << name;
			cout << "\nNgay sinh: "; get_date();
		}
		string get_name()
		{
			return name;
		}
};
class Student: public Person {
	private:
		string address, email, telephone;
	public:
		void set_student()
		{
			set_person();
			cout << "\nNhap dia chi: ";
			getline(cin, address);
			cout << "\nNhap email: ";
			getline(cin, email);
			cout << "\nNhap so dien thoai: ";
			getline(cin, telephone);
		}
		void get_student()
		{
			get_person();
			cout << "\nDia chi: " << address;
			cout << "\nEmail: " << email;
			cout << "\nSo dien thoai: " << telephone;
		}
};
class Undergrad: public Student {
	private:
		string school;
		string major;
		Person parents;
	public:
		void set_undergrad()
		{
			cout << "\nNhap truong hoc: ";
			cin.ignore();
			getline(cin, school);
			cout << "\nNhap nganh: ";
			getline(cin, major);
			set_student();
			cout << "\nNhap thong tin phu huynh: ";
			set_person();
		}
		void get_undergrad()
		{
			get_student();
			cout << "\nTruong: " << school;
			cout << "\nNganh hoc: " << major;
			cout << "\nThong tin phu huynh: ";
			parents.get_person();		
		}
		string get_major()
		{
			return major;
		}
		string get_shool()
		{
			return school;
		}
};

class Degree {
	private:
		string university, discipline;
		Date awarded;
		public:
			void input(){
				cin.ignore();
				cout<<"\nNhap truong: ";
				getline(cin,university);
				cout<<"\nNhap bang: ";
				getline(cin,discipline);
			}
};
class GradStudent: public Student {
	private:
		string dept;
		Degree lastDegree;
	public:
		set_gradstudent()
		{
			set_student();
			cout << "\nNhap nganh: ";
			getline(cin, dept);
			cout << "\nNhap  bang: ";
			lastDegree.input();
		}
};
int main()
{

	int n;
	cout << "\nNhap so luong sinh vien ";
	cin >> n;
	Undergrad u[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap sinh vien thu " << i;
		u[i].set_undergrad();
	}
	cout << "\nDanh sach sinh vien vua nhap: ";
	for(int i = 0; i < n; i++)
	{
		cout << "\nSinh vien thu " << i << ": ";
		u[i].get_undergrad();
	}

	cout << "\nCac sinh vien hoc nganh cntt: ";
	bool check = 1;
	for (int i = 0; i < n; i++)
	{
		if (u[i].get_major() == "CNTT")
		{
			u[i].get_undergrad();
			check = 0;
		}
	}
	if (check) cout << "\nKhong co sinh vien nao hoc nganh CNTT";
	
	string truong;
	cout << "\nNhap truong can tim:  ";
	getline(cin, truong);
	cout << "\nCac sinh vien hoc truong " << truong << " la: ";
	check = 1;
	for (int i = 0; i < n; i++)
	{
		if (u[i].get_shool() == truong)
		{
			u[i].get_undergrad();
			check = 0;
		}
	}
	if (check) cout << "\nKhong co sinh vien nao hoc truong " << truong;
	
	string ten;
	cout << "\nNhap ten sinh vien can tim:  ";
	getline(cin, ten);
	check = 1;
	for (int i = 0; i < n; i++)
	{
		if (u[i].get_name() == ten)
		{
			cout << "\nsinh vien can tim: ";
			u[i].get_undergrad();
			check = 0;
			break;
		}
	}
	if (check) cout << "\nKhong co sinh vien ten la " << ten;
}

