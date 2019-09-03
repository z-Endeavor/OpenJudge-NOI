#include <iostream>
using namespace std;

int main(){
	int n, count = 1, i;
	cin>>n;
	if (n == 1) {
		cout<<2;
		return 0;
	}
	for (i=3;; i+=2) {
		for (int j=3; j<n; j+=2) {
			if (j*j > i) {
				count++;
				break;
			}
			if (i%j == 0) break;
		}
		if (count == n) break;
	}
	cout<<i;
	return 0;
} 
