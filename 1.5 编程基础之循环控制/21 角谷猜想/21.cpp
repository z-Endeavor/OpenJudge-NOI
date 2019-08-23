#include <iostream>
using namespace std;

int main(){
	long n;
	cin>>n;
	while(n != 1) {
		if (n%2 != 0) {
			printf("%ld*3+1=%ld\n", n, n*3+1);
			n = n*3 + 1;
		} else {
			printf("%ld/2=%ld\n", n, n/2);
			n /= 2;
		}
	}
	cout<<"End";
	return 0;
} 
