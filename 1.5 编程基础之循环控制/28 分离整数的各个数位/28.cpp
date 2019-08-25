#include <iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	while (a > 0) {
		printf("%d ", a%10);
		a /= 10;
	}
	return 0;
}
