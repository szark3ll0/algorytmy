#include <iostream>
using namespace std;

int fib(int k){
	int a=1;
	int b=1;
	int i=2;
	while(i++<=k){
		a=a+b;
		b=a-b;
	}
	return b;
}

int main(){
	int k;
	cout<<"Podaj liczbe: ";cin>>k;
	cout<<"Fibonacci: "<<fib(k);

	return 0;
}

