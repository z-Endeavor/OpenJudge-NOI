#include <iostream>
using namespace std;

int main(){
	int m, n, i, sum = 0;
	cin>>m>>n;
	for (i=1; i<=n; i++) {
		if (i >= m && i % 17 == 0) {
			sum += i;
		}
	}
	cout<<sum;
	return 0;
} 
