#include <iostream>
using namespace std;

int main(){
	int n, a[10000];
	long sum = 0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		sum += a[i];
	}
	printf("%d %.5lf", sum, (double)sum/n);
	return 0;
}
