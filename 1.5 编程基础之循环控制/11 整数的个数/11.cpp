#include <iostream>
using namespace std;

int main(){
	int n, a[100], c1=0, c2=0, c3=0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if (a[i] == 1) c1++;
		if (a[i] == 5) c2++;
		if (a[i] == 10) c3++;
	}
	cout<<c1<<endl<<c2<<endl<<c3;
	return 0;
}
