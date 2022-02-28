#include <iostream>
#include <fstream>

using namespace std;

void przez_selekcje(int tab[], int n){
	int min_index;
	
	for(int i=0;i<n-1;i++){
		min_index = i;
		for(int j=i+1;j<n;j++){
			if(tab[j]<tab[min_index]){
				min_index = j;
			}
		}
		swap(tab[i], tab[min_index]);
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
	
	przez_selekcje(tab, n);
	
	for(int i=0;i<n;i++){
		cout<<tab[i]<<" ";
	}

	return 0;
}
