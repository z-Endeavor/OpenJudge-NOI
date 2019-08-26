#include <iostream>
using namespace std;

int main(){
	int n, sum = 0, plus = 1;
	cin>>n;
	for (int i=1; i<=n; i++) {
		plus *= i;
		sum += plus;
	}
	cout<<sum;
	return 0;
}
