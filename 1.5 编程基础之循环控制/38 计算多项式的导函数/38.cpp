#include <iostream>
using namespace std;

int main(){
	int n, c[102];
	cin>>n;
	for (int i=n; i>0; i--) {
		cin>>c[i];
		printf("%d ", c[i]*i);
	}
	if (n == 0) cout<<0;
	return 0;
} 
