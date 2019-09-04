#include <iostream>
using namespace std;

int main(){
	int n, a[101], m, count = 0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
	cin>>m;
	for (int j=0; j<n; j++) {
		if (a[j] == m) count++;

	}
	cout<<count;
	return 0;
}
