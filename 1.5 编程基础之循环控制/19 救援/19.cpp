#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	double x[100], y[100], p[100], d, t = 0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>x[i]>>y[i]>>p[i];
		d = sqrt(x[i]*x[i]+y[i]*y[i]);
		t = t + p[i]*1.5 + d/50*2;
	}
	cout<<ceil(t);
	return 0;
} 
