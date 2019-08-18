#include <iostream>
using namespace std;

int main(){
	int n, m, a[100], c=0;
	cin>>n>>m;
	for (int i=0; i<n; i++) {
		cin>>a[i];
		if (a[i] == m) c++;
	}
	cout<<c;
	return 0;
}
