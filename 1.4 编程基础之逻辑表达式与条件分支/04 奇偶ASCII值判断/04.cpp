#include <iostream>
using namespace std;

int main(){
	char a;
	int n;
	a = getchar(); //不能cin，否则空格不行 
	n = a;
	if (n % 2 == 0) {
		cout<<"NO";
	} else {
		cout<<"YES";
	}
	return 0;
} 
