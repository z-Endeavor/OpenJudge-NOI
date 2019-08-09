#include <iostream>
using namespace std;

int main(){
	char a;
	cin>>a;
	printf("%3c\n%2c%c%c\n", a,a,a,a);
	printf("%c%c%c%c%c\n", a,a,a,a,a);
	printf("%2c%c%c\n%3c", a,a,a,a);
	return 0;
}
