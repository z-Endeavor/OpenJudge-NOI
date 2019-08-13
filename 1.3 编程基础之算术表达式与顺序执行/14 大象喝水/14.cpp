#include <iostream>
using namespace std;

int main(){
	double h, r, v, PI = 3.14159;
	int n;
	cin>>h>>r;
	v = PI*r*r*h;
	n = 20000 / v + 1;
	cout<<n;
	return 0;
}
