#include <iostream>
using namespace std;

int main(){
	int M, N, x, m = 0;
	cin>>M>>N>>x;
	for (int i=x; i>0; i--) {
		m += N;
		if(m >= M) {
			N += M/N;
			m = 0;
		}
	}
	cout<<N;
	return 0;
} 
