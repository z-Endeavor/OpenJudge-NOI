#include <iostream>
using namespace std;

int main(){
	string s;
	int count = 0;
	getline(cin, s);
	for(int i=0; i<s.length(); i++) {
		if (s.at(i) >= 48 && s.at(i) <= 57) {
			count++;
		}
	}
	cout<<count;
	return 0;
} 
