#include <iostream>
using namespace std;

int main(){
	int n, a, count = 0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a;
		if (a%10 - a/1000 - a%1000/100 - a%100/10 > 0) count++;
	}
	cout<<count;
	return 0;
}
