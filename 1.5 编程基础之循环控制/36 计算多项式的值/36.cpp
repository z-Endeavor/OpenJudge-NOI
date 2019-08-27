#include <iostream>
using namespace std;

int main(){
	float x, sum = 1, a = 1;
	int n;
	cin>>x>>n;
	for (int i=0; i<n; i++) {
		a *= x;
		sum += a;
	}
	printf("%.2f", sum);
	return 0;
} 
