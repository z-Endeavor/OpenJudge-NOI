#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	int count = 0;
	if (a < 60) count++;
	if (b < 60) count++;
	if (count == 1) cout<<1;
	else cout<<0; 
	return 0;
} 
