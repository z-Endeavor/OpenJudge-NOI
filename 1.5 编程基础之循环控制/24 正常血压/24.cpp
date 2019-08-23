#include <iostream>
using namespace std;

int main(){
	int n, a[100], b[100], t=0, max=0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i]>>b[i];
		if (a[i]>=90 && a[i]<=140 && b[i]>=60 && b[i]<=90) {
			t++;
			if (t > max) max = t;
		} else t = 0;
	}
	cout<<max;
	return 0;
} 
