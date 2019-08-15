#include <iostream>
using namespace std;

int main(){
	int x, y;
	cin>>x>>y;
	if (-1 <= x && x <= 1 && -1 <= y && y <= 1) {
		cout<<"yes";
	} else {
		cout<<"no";
	}
	return 0;
} 
