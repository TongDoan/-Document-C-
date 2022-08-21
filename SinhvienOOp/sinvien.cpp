//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
#include "cautruc.cpp"
#include "node.cpp"
using namespace std;
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
	    Node<T>* InsetFront(T e);
	    Node<T>* InsetBack(T e);
	    Node<T>* head();
	    Node<T>* last();
	    void remove(Node<T>* p);
	    void display();
	    void pop_front();
		void pop_back();
		void replace(int i, T e);
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
Node<T>* LinkedList<T>::InsetBack(T e){
	Node<T>* q;
	q = new Node<T>;
	q->setElem(e);
	
	if(isEmpty()){
		header=q;
		trailer=q;
	}
	else{
		trailer->setNext(q);
		trailer =q;
	}
	n++;
	return q;
}

template<class T>
void LinkedList<T>::remove(Node<T>* p){
	Node<T>* q;
	if(p==header){
		if(size() == 1){
			header=NULL;
			trailer=NULL;
		}
		else {
			header= header->getNext();
		}
	}
	else{
		q= header;
		while(q->getNext() != p)
			q = q->getNext();
		if(q!=NULL){
			if(p!= trailer)
				q->setNext(p->getNext());
			else
				trailer = q;
		}
	}
	n--;
	delete []p;
	
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
template<class T>
void LinkedList<T>::pop_front(){
	if(size()==0) return;
			if(size()==1) {
				header=trailer=NULL;
			}
			else{
				header =header->getNext();
			}
			n--;
}

template<class T>
void LinkedList<T>::pop_back(){
	if(size()==0) return;
			if(size()==1){header=trailer=NULL; n--; return;}
			Node<T> *p=header;
			while(p->getNext()!=trailer) p=p->getNext();
			p->setNext(NULL);
			trailer=p;
			n--;
}

template<class T>
void LinkedList<T>::replace(int i, T e){
	Node<T>* temp = header;
	while(--i){
		temp= temp->getNext();
	}
	temp->setElem(e);
}

int main()
{
	LinkedList<SV>data_list;
	
    SV sv1(201341,"NGUYEN VAN A", 20,12,2002,0,"HaNoi");
    SV sv2(203042,"Pham VU MINH", 20,11,2002,0,"BacNinh");
    SV sv3(203425,"NGUYEN THI HUYEN", 23,10,2002,1,"BacGiang");
    SV sv4(201934,"NGUYEN THU THUY", 12,9,2001,1,"HaTinh");
    SV sv5(239430,"TONG TRUNG DOAN",29,1,2002,0,"NgheAn");
    SV sv6(234192,"LE KHANH HUYEN",20,3,2003,1,"ThaiBinh");
    //Them dau
    data_list.InsetFront(sv1);
	data_list.InsetFront(sv2);
	data_list.InsetFront(sv3);
	data_list.InsetFront(sv4);
	data_list.InsetFront(sv5);
	data_list.InsetFront(sv6);
	data_list.size();
	
    cout<<"Danh sach sinh vien: ";
    cout<<"\n\n";
	
  	data_list.display();
  	
  	cout<<"\nThem dau danh sach: ";
  	cout<<"\n\n";
  
  	data_list.InsetFront(sv1);
  	Node<SV>* p_head = data_list.head();
    if (p_head != NULL)
    {
        Node<SV>* temp = p_head;
        while (temp != NULL)
        {
            temp->getElem().ShowInfo();
            cout << "\n\n";
            temp = temp->getNext();
            
        }
    }
 // data_list.remove(data_list.head());
  	
    cout<<"\nXoa dau danh sach: ";
  	cout<<"\n\n";
  	data_list.pop_front();
  
    Node<SV>* phead = data_list.head();
    if (phead != NULL)
    {
        Node<SV>* temp = phead;
        while (temp != NULL)
        {
            temp->getElem().ShowInfo();
            cout << "\n\n";
            temp = temp->getNext();
            
        }
    }
   
   	cout<<"\nXoa cuoi danh sach: ";
  	cout<<"\n\n";
 
   	data_list.pop_back();
   	if (phead != NULL)
    {
        Node<SV>* temp = phead;
        while (temp != NULL)
        {
            temp->getElem().ShowInfo();
            cout << "\n\n";
            temp = temp->getNext();
            
        }
    }
    
    cout<<"\nThay the sinh vien: ";
  	cout<<"\n\n";
  	
    data_list.replace(3,sv2);
   	   	if (phead != NULL)
    {
        Node<SV>* temp = phead;
        while (temp != NULL)
        {
            temp->getElem().ShowInfo();
            cout << "\n\n";
            temp = temp->getNext();
            
        }
    }
}

