#include <iostream>
using namespace std;

int main(){
	int a, n, i, sum;
	cin>>a>>n;
	sum = a;
	for (i=1; i<n; i++) {
		sum *= a;
	}
	cout<<sum;
	return 0;
} 
