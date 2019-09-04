#include <iostream>
using namespace std;

int main(){
	int a[100], n;
	cin>>n;
	for (int i=n-1; i>=0; i--) {
		cin>>a[i];
	}
	for (int j=0; j<n; j++) {
		printf("%d ", a[j]);
	}
	return 0;
}
