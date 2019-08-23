#include <iostream>
using namespace std;

int main(){
	int n;
	double a[20], b[20], r[20];
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i]>>b[i];
		r[i] = b[i] / a[i]; 
	}
	for (int j=1; j<n; j++) {
		if (r[j] - r[0] > 0.05) cout<<"better"<<endl;
		else if (r[0] - r[j] > 0.05) cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
} 
