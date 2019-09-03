#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if (n%2 == 0) {
		cout<<n/2;
		return 0;
	}
	for(int i=3; i<n; i+=2) {
		if (i*i <= n && n%i == 0) {
			cout<<n/i;
			break;
		}
	}
	return 0;
} 
