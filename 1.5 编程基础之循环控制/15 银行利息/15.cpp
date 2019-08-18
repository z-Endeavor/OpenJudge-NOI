#include <iostream>
using namespace std;

int main(){
	double r, m, y;
	cin>>r>>m>>y;
	for (int i=0; i<y; i++) {
		m *= (1+r/100);
	}
	cout<<(int)m;
	return 0;
}
