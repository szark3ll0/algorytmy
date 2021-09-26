#include <iostream>
using namespace std;

int horner(int wsp[], int st, int x){
	if(st==0){
		return wsp[0];
	}
	return x*horner(wsp, st-1, x)+wsp[st];
}

int main(){
	int wsp[]={1,5,3,2,4,2};
	int st=5;
	int x=1;
	cout<<"Horner: "<<horner(wsp, st, x);
	return 0;
}

