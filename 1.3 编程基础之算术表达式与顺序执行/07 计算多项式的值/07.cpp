#include <iostream>
using namespace std;

int main(){
	double x, a, b, c, d, result;
	cin>>x>>a>>b>>c>>d;
	result = a*x*x*x + b*x*x + c*x + d;
	printf("%.7lf", result);
	return 0;
} 
