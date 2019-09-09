#include <iostream>
using namespace std;

int a[1010], b[1010];
int main(){
	int n, result = 0;
	cin>>n;
	for (int i=0; i<n; i++) cin>>a[i];
	for (int j=0; j<n; j++) cin>>b[j];
	for (int m=0; m<n; m++) {
		result += a[m] * b[m];
	}
	cout<<result;
	return 0;
}
