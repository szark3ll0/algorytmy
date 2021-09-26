#include <iostream>
using namespace std;

int horner(int wsp[], int st, int x){
	int war=wsp[0];
	for(int i=1; i<=st; i++){
		war=x*war+wsp[i];
	}
	return war;
}

int main(){
	int wsp[]={1,5,3,2,4,2};
	int st=5;
	int x=1;
	cout<<"Horner: "<<horner(wsp, st, x);
	return 0;
}

