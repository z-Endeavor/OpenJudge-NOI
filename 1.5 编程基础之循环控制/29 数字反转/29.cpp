#include <iostream>
using namespace std;

int main(){
	int n, r = 0, flag1 = 0, flag2 = 0; //flag1判断正负，flag2判断是否为最低位0 
	cin>>n;
	if (n < 0) {
		flag1 = 1;
		n = -n;
	}
	while (n > 0) {
		if (n%10 == 0 && flag2 == 0) {
			n /= 10;
		} else {
			flag2 = 1;
			r *= 10;
			r += n%10;
			n /= 10;
		}
	}
	if (flag1) cout<<-r;
	else cout<<r;
	return 0;
}
