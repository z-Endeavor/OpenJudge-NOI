#include <iostream>
using namespace std;

int main(){
	int n, count = 0;
	cin>>n;
	for (int i=1; i<=n; i++) {
		if (i%10 == 1) count++;
		if (i%100/10 == 1) count++;
		if (i%1000/100 == 1) count++;
		if (i%10000/1000 == 1) count++;
		if (i/10000 == 1) count++;
	}
	cout<<count;
	return 0;
}
