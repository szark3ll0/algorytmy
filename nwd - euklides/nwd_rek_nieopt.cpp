#include <iostream>
using namespace std;

int euk_r(int a, int b){
	if(a==b){
		return a;
	}
	if(a>b){
		return euk_r(a-b, b);
	}else{
		return euk_r(a, b-a);
	}
	
}

int main(){
	int a, b;
	cout<<"Podaj liczbe a: ";cin>>a;
	cout<<"Podaj liczbe b: ";cin>>b;

	cout<<"Ich NWD wynosi: "<<euk_r(a, b);
	return 0;
}

