#include <iostream>
using namespace std;

int main(){
	int n;
	double p = 1, q = 2, sum = 0, temp;
	cin>>n;
	for (int i=0; i<n; i++) {
		sum += q/p;
		temp = q;
		q = q + p;
		p = temp;
	} 
	printf("%.4lf", sum);
	return 0;
}
