#include <iostream>
using namespace std;

int main(){
	double h, d = 0;
	cin>>h;
	for (int i=0; i<10; i++) {
		d += h;
		h /= 2;
		d += h;
	}
	d -= h;
	cout<<d<<endl<<h;
	return 0;
} 
