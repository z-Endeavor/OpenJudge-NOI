#include <iostream>
using namespace std;

int main(){
	float s, ave = 0;
	for (int i=0; i<12; i++) {
		cin>>s;
		ave += s;
	}
	ave /= 12;
	printf("$%.2f", ave);
	return 0;
}
