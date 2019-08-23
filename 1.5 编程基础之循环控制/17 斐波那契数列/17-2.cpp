#include <iostream>
using namespace std;

int main(){
	int k;
	int a[47];
	a[0] = 1;
	a[1] = 1;
	cin>>k;
	for (int i=2; i<=k; i++) {
		a[i] = a[i-1] + a[i-2];
	}
	cout<<a[k-1];
	return 0;
} 
