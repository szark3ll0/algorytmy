#include <iostream>
using namespace std;

int silnia(int n){
	if(n<2){
		return 1;
	}else{
		return n*silnia(n-1);
	}
}

int main(){
	int n;
	cout<<"Podaj liczbe: ";cin>>n;
	cout<<"Silnia: "<<silnia(n);

	return 0;
}

