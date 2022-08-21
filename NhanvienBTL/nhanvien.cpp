//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
#include "cautruc.cpp"
using namespace std;
template <class T>
class Node
{
	public:
    	T  elem;  
    	Node *next;
	public:
	    Node();
	    Node *getNext();
	    void setNext(Node<T>*);
	    T getElem();
	    void setElem(T);

};
template <class T>
	Node<T>:: Node(){
		next=NULL;
}
template <class T>
Node<T> *Node<T>::getNext(){
	return next;
}
template <class T>
void Node<T>::setNext(Node<T>* p){
	next=p;
}
template <class T>
T Node<T>::getElem(){
	return elem;
}
template <class T>
void Node<T>::setElem(T e){
	elem=e;
}
template<class T>
class LinkedList
{
    Node<T>* header; 
    Node<T>* trailer;
    long n;
	public:
    	LinkedList();
    	long size();
	    int isEmpty();
	    Node<T>* head();
	    Node<T>* last();
	    Node<T>* InsetFront(T e);
	    void display();

};

template<class T>
Node<T>* LinkedList<T>::head(){
	return header;
}
template<class T>
Node<T>* LinkedList<T>::last(){
	return trailer;
}
template<class T>
LinkedList<T>::LinkedList(){
	header=NULL;
}
template<class T>
int LinkedList<T>::isEmpty(){
	return n==0;
}
template<class T>
long LinkedList<T>::size(){
	return n;
}

template<class T>
Node<T>* LinkedList<T>::InsetFront(T e){
	Node<T>* q;
	q = new Node<T>;
	q->setElem(e);
	
	if(isEmpty()){
		header=q;
		trailer=q;
	}
	else{
		q->setNext(header);
		header =q;
	}
	n++;
	return q;
}

template<class T>
void LinkedList<T>::display(){
	Node<T>* q= header;
	while(q != NULL)
	{
       		q->getElem().ShowInfo();
            cout << "\n\n";
            q = q->getNext();
    }
}

int main()
{
	LinkedList<nhanvien> a;
	nhanvien x;
	while(!NULL){
		
		x.Input();
		a.InsetFront(x);
		if(x.get_MCB() == 0) break;
	}
	a.display();
	cout<<"\nLuong tung canbo: \n";
	//Duyet danh sach
	Node<nhanvien>* p_head = a.head();
    if (p_head != NULL)
    {
        Node<nhanvien>* temp = p_head;
        while (temp != NULL)
        {
            temp->getElem().tinhluong();
            cout << "\n";
            temp = temp->getNext();
        }
    }
	//in can bo co he so luong > 4.4
	cout<<"\nCan bo co he so luong tren 4.4 la: \n";
        Node<nhanvien>* temp = p_head;
        while (temp != NULL)
        {
	        	temp->getElem().shownv();
	            cout << "\n";
	            temp = temp->getNext();
        }
    //Gia su co 3 chuc vu la (Giam Doc, Truong Phong, Nhan vien)
	cout<<"\nDanh sach theo chuc vu la: \n";   
    if (p_head != NULL)
    {
        Node<nhanvien>* temp = p_head;
        while (temp != NULL)
        {
            temp->getElem().intheochuc("Giamdoc");
            cout << "\n";
            temp = temp->getNext();
        }
    }
        if (p_head != NULL)
    {
        Node<nhanvien>* temp = p_head;
        while (temp != NULL)
        {
            temp->getElem().intheochuc("Truongphong");
            cout << "\n";
            temp = temp->getNext();
        }
    }
    if (p_head != NULL)
    {
        Node<nhanvien>* temp = p_head;
        while (temp != NULL)
        {
            temp->getElem().intheochuc("Nhanvien");
            cout << "\n";
            temp = temp->getNext();
        }
    }
    
    char b[20];
    cout<<"\Nhap chuc vu can tim: ";
    cin>>b;
    if (p_head != NULL)
    {
        Node<nhanvien>* temp = p_head;
        while (temp != NULL)
        {
            temp->getElem().timtheochuc(b);
            cout << "\n";
            temp = temp->getNext();
        }
    }
   
    char e[20];
    int s;
    cout<<"\nNhap phong ban can tim: ";
    cin>>e;
    cout<<"\nNhap he so luong can tim: ";
    cin>>s;
    if (p_head != NULL)
    {
        Node<nhanvien>* temp = p_head;
        while (temp != NULL)
        {
            temp->getElem().timnhanvien(e,s);
            cout << "\n";
            temp = temp->getNext();
        }
    }
}

