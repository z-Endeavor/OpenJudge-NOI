#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int flag = 0;
	if (n % 3 == 0) {
		cout<<"3";
		flag++;
	}
	if (n % 5 == 0) {
		if (flag) cout<<" ";
		cout<<"5";
		flag++;
	}
	if (n % 7 == 0) {
		if (flag) cout<<" ";
		cout<<"7";
		flag++;
	}
	if (!flag) {
		cout<<"n";
	}
	return 0;
} 
