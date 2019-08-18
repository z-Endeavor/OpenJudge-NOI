#include <iostream> 
using namespace std;

int main(){
	double n, k, p = 200, c = 0;  //k不能为int类型，影响后面的运算 
	cin>>n>>k;
	for (int i=1; i<=20; i++) {
		c += n;
		if (c >= p) {
			cout<<i;
			return 0;
		}
		p = p*(k/100+1);
	}
	cout<<"Impossible";
	return 0;
}
