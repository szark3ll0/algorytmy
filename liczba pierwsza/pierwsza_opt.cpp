#include <iostream>
using namespace std;

bool pierwsza(int a){
	for(int i = 2; i*i<=a; i++)
		if(a%i==0)
			return false;
	return true;
}

int main(){
	int a;
	cout<<"Podaj liczbe: ";cin>>a;
	if(pierwsza(a)){
		cout<<"Podana liczba jest pierwsza";
	}else{
		cout<<"Podana liczba nie jest pierwsza";
	}
	return 0;
}

