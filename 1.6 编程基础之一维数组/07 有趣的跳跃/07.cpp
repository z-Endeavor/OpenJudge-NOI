#include <iostream>
#include <cstdlib>
using namespace std;

int a[3010], b[3010] = {0};
int main(){
	int n;
	cin>>n;
	if (n == 1) {
		cout<<"Jolly";
		return 0;
	}
	for (int i=0; i<n; i++) {
		cin>>a[i];
	}
	for (int j=1; j<n; j++) {
		b[abs(a[j-1]-a[j])] = 1;
	}
	for (int i=1; i<n; i++) {
		if (b[i] != 1) {
			cout<<"Not jolly";
			return 0;
		}
	}
	cout<<"Jolly";
	return 0;
}
