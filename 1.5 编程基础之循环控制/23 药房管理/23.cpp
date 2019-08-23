#include <iostream>
using namespace std;

int main(){
	int m, n, a[100], p = 0;
	cin>>m>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if (m-a[i] < 0) p++;
		else m -= a[i];
	}
	cout<<p;
	return 0;
} 
