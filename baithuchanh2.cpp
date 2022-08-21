//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
template <class T>
class Node {
	private:
		T elem;
		Node<T> *next;
	public:
		Node<T> (T x)
		{
			elem = x;
			next = NULL;
		}
		Node<T> (T x, Node *t)
		{
			elem = x;
			next = t;
		}
		Node<T>* getnext()
		{
			return next;
		}
		T& getelem()
		{
			return elem;
		}
};
template<class T>
class Stack {
	private:
		int num;
		Node<T> *head;
	public:
		Stack()
		{
			num = 0;
			head = NULL;
		}
		~Stack()
		{
			num = 0;
			if (head!=NULL)
			delete []head;
		}
		int size()
		{
			return num;
		}
		bool isEmpty()
		{
			return num==0;
		}
		T &top();
		int pop();
		void push(T x);
};

template<class T>
T& Stack<T>::top(){
		if (head!=NULL)
		return head->getelem();
}

template<class T>
int Stack<T>::pop(){
	if (num < 1)
		{
			return 0;
		}
		Node<T> *temp = head;
		head = head->getnext();
		delete temp; 
		num--;
		return 1;
}

template<class T>
void Stack<T>::push(T x){
	Node<T> *temp = new Node<T>(x,head);
	head = temp;
	num++;
}

int f(int u, int v, char p)
{
	if (p=='+') return u+v;
	if (p=='-') return u-v;
	if (p=='*') return u*v;
	return u/v;
}

int main()
{
	Stack<int> a;
	int n;
	cout<<"\nNhap so phan tu: ";
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cout<<"Nhap phan tu thu "<<i+1<<" de dua vao stack: ";
        cin>>x;
		a.push(x);
	}
	cout<<"\nTrong stack co so phan tu la: "<<a.size();
	cout << "\nCac phan tu trong stack: ";
	while (!a.isEmpty())
	{	
		int t = a.top();
		cout << t << "\t";
		a.pop();
	}
	if(a.isEmpty()==0){
		cout<<"\nRong";
	}else {
		cout<<"\nKhong rong nha!";
	}
	
	cout << "\nNhap hau to: ";
	string x;
	cin >> x;
	Stack<int> s;
	for(auto c:x)
	{
		if ('0'<=c && c<='9'){
			s.push((int)c - (int)'0');
		}
			
		else 
		{
			int v = s.top();
			s.pop();
			int temp = f(s.top(), v, c);
			s.pop();
			s.push(temp);
		}
	}
	cout << "\nGia tri la: " << s.top();
}

