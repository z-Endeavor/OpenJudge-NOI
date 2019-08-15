#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	float a, b, c;
	cin>>a>>b>>c;
	if (b*b == 4*a*c) {
		if(b == 0) cout<<fixed<<setprecision(5)<<"x1=x2="<<b/(2*a);
		else cout<<fixed<<setprecision(5)<<"x1=x2="<<-b/(2*a);
	} else if (b*b > 4*a*c) {
		cout<<fixed<<setprecision(5)<<"x1="<<(-b + sqrtf(b*b-4*a*c))/(2*a)<<";"<<"x2="<<(-b - sqrtf(b*b-4*a*c))/(2*a);
	} else {
		if(b == 0) cout<<fixed<<setprecision(5)<<"x1="<<b / (2*a)<<"+"<<sqrtf(4*a*c-b*b) / (2*a)<<"i;"<<"x2="<<b / (2*a)<<"-"<<sqrtf(4*a*c-b*b) / (2*a)<<"i";
		else cout<<fixed<<setprecision(5)<<"x1="<<-b / (2*a)<<"+"<<sqrtf(4*a*c-b*b) / (2*a)<<"i;"<<"x2="<<-b / (2*a)<<"-"<<sqrtf(4*a*c-b*b) / (2*a)<<"i";
	}
	return 0;
} 
