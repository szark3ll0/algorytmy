#include <iostream>
using namespace std;

int fib_r(int k){
	if(k<3){
		return 1;
	}
	else{
		return fib_r(k-1)+fib_r(k-2);
	}
}

int main(){
	int k;
	cout<<"Podaj liczbe: ";cin>>k;
	cout<<"Fibonacci: "<<fib_r(k);

	return 0;
}

