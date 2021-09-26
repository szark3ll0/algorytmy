#include <iostream>
using namespace std;

void konwersja(int a[], int n, int p){
	int dziesietny = a[0];
	for(int i = 1; i<=n; i++){
		dziesietny = dziesietny*p+a[i];
	}
	int x=8; //system liczby na ktory domyslnie ma program przekonwertowac
	int m=1;
	while(x<dziesietny){
		m++;
		x*=8;
	}
	int b[m];
	int w=0;
	while(w<=m){
		b[w]=dziesietny%8;
		dziesietny/=8;
		w++;
	}
	for(int g=m-1; g>=0; g--){
		cout<<b[g];
	}
}

int main(){
	int a[]={3,2,1};
	int n = 2; // potega (zalezna od wielkosci tablicy => jest to maksymalny indeks tablicy czyli dlugosc liczby-1)
	int p = 4; // system liczbowy
	konwersja(a, n, p);
	cout<<endl;
	// zapisywanie i wyswietlanie danych z tablicy, powtórka
	cout<<"------------------"<<endl;
	
	int ilosc;
	cout<<"ilosc danych w tablicy: ";cin>>ilosc;
	cout<<"Podaj liczby :"<<endl;
	int tablica[ilosc-1];
	for(int f=0; f<ilosc; f++){
		cin>>tablica[f];
	}
	cout<<"Twoje liczby: ";
	for(int f=0; f<ilosc; f++){
		cout<<tablica[f]<<" ";
	}
	return 0;
}

