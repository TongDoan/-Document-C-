#include<iostream>
#include<math.h>
using namespace std;
template<class T,class K>
class Node{
	K key;
    T data;
    Node<T,K> *parent;
    Node<T,K> *left;
    Node<T,K> *right;
    public :
    	Node(){
    		parent=nullptr;
    		right=nullptr;
    		left=nullptr;
		}
		K& get_key(){
			return key;
		}
		Node<T,K>* get_parent(){
			return parent;
		}
		Node<T,K>* get_left(){
		    return left;
		}
		Node<T,K>* get_right(){
			return right;
		}
		T& get_data(){
			return data;
		}
		void set_key(K x){
			key=x;
		}
		void set_parent(Node<T,K> *p){
		    parent=p;
		}
		void set_left( Node<T,K> *p){
             left=p;
		}
		void set_right(Node<T,K> *p){
			right=p;
		}
		void set_data(T x){
		     data=x;
		}
		bool has_left(){
			return left ==nullptr;
		}
		bool has_right(){
			return right ==nullptr;
		}
};
template<class T,class K>
class BS_Tree{
	Node<T,K> *roof;
	public:
		BS_Tree(){
		    roof=nullptr;
		}
		Node<T,K>* get_roof(){
			return roof;
		}
        bool isEmpty(){
            return roof==nullptr;
		}
        bool isInternal(Node<T,K> *p)  { return (p->has_left() && p->has_right()); }
 		bool isExternal(Node<T,K> *p){ return !p->has_left() || !p->has_right() ;}
 		bool isRoot(Node<T,K> *p){  	return roof->get_parent()==nullptr;  }
 	    
 		void add_Node(T x){
 		
 			Node<T,K> *p=new Node<T,K>();
 			p->set_data(x);
 			if(roof==nullptr)   roof=p; 
			else{
			Node<T,K> *q;
			q=roof; 
			while(q!=nullptr ){	
	    		if(x <= q->get_data()){
				    if(q->get_left()==nullptr){	
						p->set_parent(q);
						q->set_left(p);
	    				q=nullptr;
					}else q=q->get_left(); 
				} 
				else{
					if(q->get_right()==nullptr){
						p->set_parent(q);
						q->set_right(p);
						q=nullptr;
					}else q=q->get_right();
				}
			}	
          }
        }
        void insert_Node(Node<T,K> *q,Node<T,K> *p){
        	if(q==nullptr) {q=p;
			} 
        	else    if(q->get_data() > p->get_data()) insert_Node(q->get_left(),p);
        	        else if(q->get_data() < p->get_data())insert_Node(q->get_right(),p);
        	             else cout<<"gia tri dax co trong tree \n";
		}
		Node<T,K>* search_Node(T x,Node<T,K> *p){
			if(p==nullptr){
				cout<<"khong co phan tu nay \n";
				return nullptr;
			} 
			else if(p->get_data() > x ) search_Node(x,p->get_left());
			    else if(p->get_data()< x) search_Node(x,p->get_right());
			         else return p;
		} 
		
      	void preOrder(Node<T,K> *q){
			if(q!=nullptr){
				cout<<q->get_data()<<" ";
		    	preOrder(q->get_left());
		    	preOrder(q->get_right());
			}	
	    }
        
		void remove(Node<T,K> *q){
			Node<T,K> *p;
			if(q->has_left() && q->has_right()){
				p=q->get_parent();
			    if(p!=nullptr){
			    	if(p->get_left()==q) p->set_left(nullptr);
					else p->set_right(nullptr); 
				}
			}
			if(!q->has_left() && q->has_right()){
				p=q->get_parent();
				(q->get_left())->set_parent(p);
				if(p->get_left()==q)  p->set_left(q->get_left());
				else p->set_right(q->get_left());
			}
			if(q->has_left() && !q->has_right()){
			    p=q->get_parent();
				(q->get_right())->set_parent(p);
				if(p->get_left()==q)  p->set_left(q->get_right());
				else p->set_right(q->get_right());
			}
			delete q;
			
		}
		void remove( T x){
			Node<T,K> *p=search_Node( x,roof); 
			if(p==nullptr) return;
			else    if((p->has_left() && !p->has_right()) || (!p->has_left() && p->has_right()) )
			            remove(p);
			     	else { 
			     	    Node<T,K> *first;
			     	    int k=0;
			     	    inOrder(p->get_right(),first,k);
			     	    p->set_data(first->get_data());
			     	    remove(first);  
				 	}
		}
		void inOrder(Node<T,K> *q,Node<T,K> *&first, int &k){
			if(q!=nullptr&& k!=1){
        		inOrder( q->get_left(),first,k);
        		if(k==0){
        			first=q;
        			k=1;
				}
        		inOrder( q->get_right(),first,k);
            }
		} 
		void printPaths(){
   			T  path[100];
   			Node<T,K> *q;
   			q=roof;
   			T sum=0;
   			T sum2=0;
    		printPathsRecur(q, path, 0,sum,sum2);cout<<sum2; 
		}	
		void printPathsRecur(Node<T,K> *q, T path[], int pathLen,T sum ,T &sum2){
    		if (q == NULL)  return;
    		path[pathLen] = q->get_data();
    		sum+=path[pathLen];
    		pathLen++;
    		if (q->has_left() && q->has_right()){ 
        		print(path, pathLen,sum,sum2);
    		}
    		else{
        		printPathsRecur(q->get_left(), path, pathLen,sum,sum2);
        		printPathsRecur(q->get_right(), path, pathLen,sum,sum2);
    		}
		}
		void print(T a[],int len,T sum,T &sum2){
			for(int i=0 ; i< len ; i++){
				cout<<a[i]<<" ";
			}
			if(sum==21) cout<<"tong duong di bang 21   ";
			else cout<<" tong khong bang 21   ";
			T *sub;
			int j;
			for(int i=len-1, j=0; i>=0; j++,i--){
				sub[j]=a[i];
			}
			for(int i=0; i<len ; i++){
				sum2 = sum2 + sub[i] * pow(10,i);
			}
			cout<<sum2; 
			cout<<endl;
		}
};
int main(){
    BS_Tree<int,int> a;
    a.add_Node(5); 
    a.add_Node(3);
    a.add_Node(7);
    a.add_Node(1);
    a.add_Node(4);
    a.add_Node(6);
	a.add_Node(9);
    a.printPaths();
}
