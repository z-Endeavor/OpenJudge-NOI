#include <iostream>
using namespace std;

int main(){
	int a[11], h, count = 0;
	for (int i=0; i<10; i++) {
		cin>>a[i];
	}
	cin>>h;
	for (int j=0; j<10; j++) {
		if (a[j] <= h + 30) count++;
	}
	cout<<count;
	return 0;
}
