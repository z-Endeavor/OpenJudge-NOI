#include <iostream>
using namespace std;

int main(){
	int k, a = 1, b = 1, n = 1;
	cin>>k;
	if (k > 2) {
		for (int i=0; i<k-2; i++) {
			n = a + b;
			a = b;
			b = n;
		}
	}
	cout<<n;
	return 0;
} 
