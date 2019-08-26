#include <iostream>
using namespace std;

int main(){
	long long n, plus = 1;
	double e = 1;
	cin>>n;
	for (int i=1; i<=n; i++) {
		plus *= i;
		e += 1.0/plus;
	}
	printf("%.10lf", e);
	return 0;
}
