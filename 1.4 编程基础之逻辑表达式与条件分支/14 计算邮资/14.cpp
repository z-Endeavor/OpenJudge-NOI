#include <iostream>
using namespace std;

int main(){
	int w, sum = 0;
	char b;
	cin>>w>>b;
	if (b == 'y') sum += 5;
	if (w <= 1000) {
		sum += 8;
		cout<<sum;
	} else {
		sum += 8 + ((w-1000) / 500) * 4;
		if (((w-1000) % 500) > 0) sum += 4;
		cout<<sum; 
	}
	return 0;
} 
