#include <iostream>
using namespace std;

int main(){
	float n;
	cin>>n;
	if (n < 0) {
		printf("%.2f", -n);
	} else {
		printf("%.2f", n);
	}
	return 0;
} 
