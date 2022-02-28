#include <iostream>
#include <fstream>

using namespace std;

void babelkowe(int tab[], int n){
	for(int i=0; i<n; i++){
		for(int j=1; j<n-i; j++){
			if(tab[j-1]>tab[j]){
				swap(tab[j-1], tab[j]);
			}
		}
	}
}

int main(){
	int n;
	
	cout<<"Rozmiar tablicy";
	cin>>n;
	
	int tab[n]={};
	for(int i=0;i<n;i++){
		cin>>tab[i];
	}
	
	babelkowe(tab, n);
	
	for(int i=0;i<n;i++){
		cout<<tab[i]<<" ";
	}

	return 0;
}
