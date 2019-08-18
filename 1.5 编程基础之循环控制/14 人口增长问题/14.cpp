#include <iostream>
using namespace std;

int main(){
	int x, n;
	double r;
	cin>>x>>n;
	r = x;
	for (int i=0; i<n; i++) {
		r *= 1.001;
	}
	printf("%.4lf", r);
	return 0;
}
