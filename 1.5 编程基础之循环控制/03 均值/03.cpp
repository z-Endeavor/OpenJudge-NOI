#include <iostream>
using namespace std;

int main(){
	int n;
	float a, ave = 0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a;
		ave += a;
	}
	ave /= n;
	printf("%.4f", ave);
	return 0;
}
