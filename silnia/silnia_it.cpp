#include <iostream>
using namespace std;

int silnia(int n){
	if(n<2){
		return 1;
	}
	int a = 1;
	while(n>0){
		a=a*n;
		n--;
	}
	return a;
}

int main(){
	int n;
	cout<<"Podaj liczbe: ";cin>>n;
	cout<<"Silnia: "<<silnia(n);

	return 0;
}

