#include <iostream>
#include <fstream>

using namespace std;

void przez_wstawianie(int tab[], int n){
	int p, j;
	for(int i=1;i<n;i++){
		p=tab[i];
		j=i-1;
		
		while(j>=0 && tab[j]>p){
			tab[j+1]=tab[j];
			--j;
		}
		tab[j+1]=p;
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
	
	przez_wstawianie(tab, n);
	
	for(int i=0;i<n;i++){
		cout<<tab[i]<<" ";
	}

	return 0;
}
