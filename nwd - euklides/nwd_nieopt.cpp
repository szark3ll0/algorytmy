#include <iostream>
using namespace std;

int euk(int a, int b){
	while(a!=b){
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
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

