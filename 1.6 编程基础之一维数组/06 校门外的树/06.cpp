#include <iostream>
using namespace std;

int main(){
	int l, m, a, b, t[10005] = {0}, count = 0;
	cin>>l>>m;
	for(int i=0; i<m; i++) {
		cin>>a>>b;
		if(b > l) b = l;
		if(a < 0) a = 0;
		for (int j=a; j<=b; j++) {
			t[j] = 1;
		}
	}
	for (int i=0; i<=l; i++) {
		if (t[i] == 0) count++;
	}
	cout<<count;
	return 0;
}
