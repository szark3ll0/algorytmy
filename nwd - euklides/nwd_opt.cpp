#include <iostream>
using namespace std;

int euk(int a, int b){
	while(b!==0){
		int r = a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int a, b;
	cout<<"Podaj liczbe a: ";cin>>a;
	cout<<"Podaj liczbe b: ";cin>>b;

	cout<<"Ich NWD wynosi: "<<euk(a, b);
	return 0;
}

