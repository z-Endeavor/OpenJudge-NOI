#include <iostream>
using namespace std;

int main(){
	int n, x, y, m;
	cin>>n>>x>>y;
	if (y % x == 0) {
		m = n - y / x;
	} else {
		m = n - y / x - 1;
	}
	cout<<m;
	return 0;
}
