//TONG TRUNG DOAN (OhZiaBayBe)
#include<bits/stdc++.h>
using namespace std;
typedef int item; 
struct Node
{
     item key; 
     Node *Left, *Right; 
};
typedef Node *Tree;  
   
Node* makeNode(Node *p, item x) // chen 1 Node vao cay
{
    p = new Node;
    p->key = x;
    p->Left = p->Right = NULL;
    return p;   
}
 
Node*  CreateTree(Node *p,item x) // nhap cay
{   
        cout<<"\nNode: ";
        cin>>x;
        if (x==0)return NULL;
        p=  makeNode(p,x);
        cout<<"\nNhap con trai cua node: ";
        p->Left=CreateTree(p->Left,x);
        cout<<"\nNhap con phai cua node: ";
        p->Right=CreateTree(p->Right,x);
    return p;       
}
   

void LNR(Tree T) // Duyet theo LNR thu tu giua
{
     if(T!=NULL)
     {
	    LNR(T->Left);
	    cout<<"\t"<<T->key;
	    LNR(T->Right);
     }
}

void NLR(Tree T) //duyet theo thu tu truoc
{
     if(T!=NULL)
     {
	    cout<<"\t"<<T->key;
	    NLR(T->Left);
	    NLR(T->Right);
     }
}
void LRN(Tree T) //duyet theo thu tu sau
{
     if(T!=NULL)
     {
     	LRN(T->Left);
     	LRN(T->Right);
     	cout<<"\t"<<T->key;
     }
}

Node* searchKey(Tree T, item x)     // tim nut co key x
{  
 if (T == NULL)
        return NULL;

	Tree p = T;
	while (p != NULL)
	{
		if (p->key == x)
		{
			return p;
		}
		else if (p->key > x)
		{
			p = p->Left;
		}
		else
		{
			p = p->Right;
		}
	}
}
   
int main()
{
    Tree T;
    T=NULL; 
    Node *p=NULL;item x;
    cout<<"Nhap 0 de chuyen sang nhap node khac hoac thoat";
    T=CreateTree(p,x);
    cout<<"Duyet cay theo thu tu giua LNR: \n";
    LNR(T);
    cout<<"\n";
            
    cout<<"Duyet cay theo thu tu truoc NLR: \n";
    NLR(T);
	cout<<"\n";
            
    cout<<"Duyet cay theo thu tu sau LRN: \n";
    LRN(T);
    cout<<"\n";
    Node *P;
    cout<<"\nNhap vao key can tim: ";
    cin>>x;
    P = searchKey(T, x);
    if (P != NULL){
    	cout<<"Tim thay key "<< P->key;
	} 
   	else {
   		cout<<"Key khong co";
	   } 
}
