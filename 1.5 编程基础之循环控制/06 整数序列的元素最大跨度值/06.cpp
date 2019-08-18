#include <iostream>
using namespace std;

int main(){
	int n, a[1000], max = 0, min = 1000;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	cout<<max-min;
	return 0;
}
