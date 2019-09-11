#include <iostream>
using namespace std;

int main(){
	string str;
	char c, newC;
	cin>>str>>c>>newC;
	for (int i=0; i<str.length(); i++) {
		if (str[i] == c) {
			str[i] = newC;
		}
	}
	cout<<str;
	return 0;
}
