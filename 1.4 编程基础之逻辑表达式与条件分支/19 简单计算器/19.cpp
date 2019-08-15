#include <iostream>
using namespace std;

int main(){
	int a, b;
	char o;
	cin>>a>>b>>o;
	if (o == '/' && b == 0) {
		cout<<"Divided by zero!";
		return 0;
	}
	if (o != '+' && o != '-' && o != '*' && o != '/') {
		cout<<"Invalid operator!";
		return 0;
	}
	switch(o) {
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '*':
			cout<<a*b;
			break;
		case '/':
			cout<<a/b;
			break;
		default:
			break;
	}
	return 0;
} 
