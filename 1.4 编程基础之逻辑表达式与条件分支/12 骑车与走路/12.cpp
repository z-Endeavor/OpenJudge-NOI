#include <iostream>
using namespace std;

int main(){
	double d, t1, t2;
	cin>>d;
	t1 = 27 + 23 + d/3;
	t2 = d / 1.2;
	if (t1 < t2) cout<<"Bike";
	else if (t1 > t2) cout<<"Walk";
	else cout<<"All";
	return 0;
} 
