#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double a, b, c, x , y;
	cin>>a>>b>>c;
	x = b*b - 4*a*c;
	y = -b/(2*a);
	if (x == 0) {
		printf("x1=x2=%.5f", y);
	}
	else {
		int flag = (x>0)? 1 : -1;
		x = sqrt(flag * x);
		if (x > 0) printf("x1=%.5f;x2=%.5f", x + y, x - y);
		else printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",y , x , y, x);
	}
	return 0;
}
