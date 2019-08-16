#include <iostream>
using namespace std;

int main(){
	int m, n, i, sum = 0;
	cin>>m>>n;
	for (i=1; i<=n; i+=2) {
		if (i >= m) sum += i;
	}
	cout<<sum;
	return 0;
} 
