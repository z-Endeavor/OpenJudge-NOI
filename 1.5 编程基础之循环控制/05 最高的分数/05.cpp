#include <iostream>
using namespace std;

int main(){
	int n, a[100], max = 0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if (a[i] > max) max = a[i];
	}
	cout<<max;
	return 0;
}
