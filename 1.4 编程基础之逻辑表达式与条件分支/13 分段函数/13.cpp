#include <iostream>
using namespace std;

int main(){
	float x;
	cin>>x;
	if (x < 5) printf("%.3f", -x + 2.5);
	else if (x < 10) printf("%.3f", 2 - 1.5*(x-3)*(x-3));
	else printf("%.3f", x/2 - 1.5);
	return 0;
} 
