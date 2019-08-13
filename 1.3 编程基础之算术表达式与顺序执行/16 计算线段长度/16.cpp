#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double x1, y1, x2, y2, d;
	cin>>x1>>y1;
	cin>>x2>>y2;
	d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("%.3lf", d);
	return 0;
}
