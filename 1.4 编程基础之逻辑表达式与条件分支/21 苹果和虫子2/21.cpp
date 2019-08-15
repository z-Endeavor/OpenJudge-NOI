#include <iostream>
using namespace std;

int main(){
	int n, x, y;
	cin>>n>>x>>y;
	if (y >= x*n) {
		cout<<0;
		return 0;
	} else {
		n = n - y/x;
		if (y % x != 0) n -= 1;
		cout<<n;
		return 0;
	}
	
} 
