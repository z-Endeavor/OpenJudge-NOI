#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double x1, y1, x2, y2, x3, y3;
	double a, b, c, p, s;   //pÎª°ëÖÜ³¤ 
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	p = (a + b + c) / 2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2lf", s);
	return 0;
}
