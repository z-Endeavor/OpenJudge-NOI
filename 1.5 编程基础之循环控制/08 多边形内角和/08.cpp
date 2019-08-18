#include <iostream>
using namespace std;

int main(){
	int n, a, s = 0, r;
	cin>>n;
	for (int i=0; i<n-1; i++) {
		cin>>a;
		s += a;
	}
	r = (n-2)*180 - s;
	cout<<r;
	return 0;
}
