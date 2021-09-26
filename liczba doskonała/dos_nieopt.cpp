#include <iostream>
using namespace std;

bool doskonala(int a){
	if(a<=0)
		return false;
	int d=2, suma=1;
	cout<<"Dzielniki: 1 ";
	for(d; d<a; d++){
		if(a%d==0){
			cout<<d<<" ";
			suma+=d;
		}
	}
	cout<<endl;
	cout<<"Suma: "<<suma<<endl;
	if(suma==a){
		return true;
	}
	return false;
}

int main(){
	int a;
	cout<<"Podaj liczbe: ";cin>>a;
	if(doskonala(a)){
		cout<<"Podana liczba jest doskonala";
	}else{
		cout<<"Podana liczba nie jest doksonala";
	}

	return 0;
}

