#include <iostream>
using namespace std;

int euk_r(int a, int b){
	if(b==0){
		return a;
	}
	return euk_r(b, a%b);
	
}

int main(){
	int a, b;
	cout<<"Podaj liczbe a: ";cin>>a;
	cout<<"Podaj liczbe b: ";cin>>b;

	cout<<"Ich NWD wynosi: "<<euk_r(a, b);
	return 0;
}

