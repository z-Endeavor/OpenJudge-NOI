#include <iostream>
using namespace std;

int main(){
	int m=0, s=0, a[13], flag = 0;
	for (int i=1; i<=12; i++) {
		cin>>a[i];
		m += 300;
		if (m - a[i] < 0) {
			flag = i;
		} else {
			m -= a[i];
			if (m >= 100) {
				s += m - m%100;
				m = m%100;
			}
		}	
	}
	if (flag) cout<<-flag;
	else cout<<s*1.2 + m;
	return 0;
} 
