#include <iostream>
using namespace std;

int main(){
	int h, w, m;
	char c;
	cin>>h>>w>>c>>m;
	if (m == 1) {
		for (int i=0; i<h; i++) {
			for (int j=0; j<w; j++) {
				cout<<c;
			}
			cout<<endl;
		}
	} else if (m == 0) {
		for (int i=0; i<h; i++) {
			for (int j=0; j<w; j++) {
				if (i == 0 || i == h-1) cout<<c;
				else if (j == 0 || j == w-1) cout<<c;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
} 
