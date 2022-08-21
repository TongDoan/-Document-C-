#include<bits/stdc++.h>
using namespace std;

long long fibonacci(int n) {
    long long f0 = 0;
    long long f1 = 1;
    long long fn = 1;
    int i;
 
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        for (i = 2; i < n; i++) {
            f0 = f1;
            f1 = fn;
            fn = f0 + f1;
        }
    }
    return fn;
}
 

int main() {
 int i;
    cout<<"100 so dau tien cua day so Fibonacci: \n";
    for (i = 0; i < 100; i++) {
    	if(i%10==0){
    		cout<<"\n";
		}
        cout<< " "<< fibonacci(i);
    }
}
