#include <iostream>
using namespace std;

int main(){
	int n, a, i;
	float ave = 0;
	cin>>n;
	for (i=0; i<n; i++) {
		cin>>a;
		ave += a;
	}
	ave /= n;
	printf("%.2f", ave);
	return 0;
}
