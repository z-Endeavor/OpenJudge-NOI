#include <iostream>
using namespace std;

int main(){
	int m, k, count = 0;
	cin>>m>>k;
	if (m%19 != 0) {
		cout<<"NO";
		return 0;
	}
	while (m > 0) {
		if (m%10 == 3) count++;
		m /= 10;
	}
	if (count == k) cout<<"YES";
	else cout<<"NO";
	return 0;
}
