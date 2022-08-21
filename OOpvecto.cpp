//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
class vecto {
	int n;
	float *x;
	public:
		vecto(){	}
		vecto(int n1);
		~vecto(){delete x;}
		friend istream &operator>>(istream& is, vecto& p);
		friend ostream &operator<<(ostream& os, vecto p);
		
		float &operator[](int i);
		int operator==(vecto& p);
		vecto& operator=(vecto& p);
		
};

vecto::vecto(int n1){
	n=n1;
	x= new float[n+1];
}

istream &operator>>(istream& is, vecto& p){
	cin>>p.n;
	p.x = new float[p.n+1];
	for(int i=0; i<(p.n);i++){
		cout<<"\nNhap he so thu "<<i+1<<": ";
		is>>p.x[i];
	}
	return is;
}

vecto& vecto::operator=(vecto& p)
{
	n=p.n;
	x=new float[n];
	for(int i=0;i<n;++i)
	    x[i]=p.x[i];
	    return (*this);
}

ostream &operator<<(ostream& os, vecto p){
	for(int i=0; i<(p.n);i++){
		os<<"\t"<<p.x[i];
	}
	return os;
}

float& vecto::operator[](int i){
	if( i > n )
          {
          	cout << "\n======================\n" <<endl;
              cout << "Chi muc vuot gioi han!!" <<endl; 
              return x[0];
          }
          return x[i];
}

int vecto::operator==(vecto& p){
	for(int i=0;i<n;++i){
		if(x[i]==p.x[i]){
			return 1;
		}
		else{
			return 0;
		}
	}
	
}
int main()
{
	vecto a,b;
	cin>>a>>b;
	cout<<a<<"\n"<<b;
	if(a==b){
		cout<<"\nBang nhau";
	}
	else{
		cout<<"\nK bang nhau";
	}
}

