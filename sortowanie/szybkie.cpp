#include <iostream>
#include <fstream>

using namespace std;

void szybkie(int tab[], int lewy, int prawy){
	if(prawy<=lewy){
		return;
	}
	
	int i=lewy-1;
	int j=prawy+1;
	int pivot=tab[(lewy+prawy)/2];
	
	while(1){
		while(pivot>tab[++i]);
		
		while(pivot<tab[--j]);
		
		if(i<=j){
			swap(tab[i], tab[j]);
		}else{
			break;
		}
	}
	if(j>lewy){
		szybkie(tab, lewy, j);
	}
	if(i<prawy){
		szybkie(tab, i, prawy);
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
	
	szybkie(tab, 0, n-1);
	
	for(int i=0;i<n;i++){
		cout<<tab[i]<<" ";
	}

	return 0;
}
