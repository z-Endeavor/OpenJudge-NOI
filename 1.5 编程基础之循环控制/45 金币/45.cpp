#include <iostream>
using namespace std;

int main(){
	int d, sum = 0;
	cin>>d;
	for (int i=1;; i++) {
		for (int j=1; j<=i; j++){
			sum += i;
			d--;
			if (d == 0) {
				cout<<sum;
				return 0;
			}
		}
	}
	return 0;
}
