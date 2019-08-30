#include <iostream>
using namespace std;

int main(){
	int l, r, n, x, count = 0;
	cin>>l>>r;
	n = l;
	while (n <= r) {
		x = n;
		while (x > 0) {
			if (x%10 == 2) count++;
			x /= 10;
		}
		n++;
	}
	cout<<count;
	return 0;
}
