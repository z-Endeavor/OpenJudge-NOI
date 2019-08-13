#include <iostream>
using namespace std;

int main(){
	int a1, a2, n, d, an;
	cin>>a1>>a2>>n;
	d = a2 - a1;
	an = a1 + (n-1)*d;
	cout<<an;
	return 0;
}
