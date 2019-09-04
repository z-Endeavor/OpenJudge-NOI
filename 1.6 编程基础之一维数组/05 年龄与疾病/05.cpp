#include <iostream>
using namespace std;

int main(){
	int n, a, r[5] = {0};
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a;
		if (a <= 18) r[0]++;
		if (a > 18 && a <= 35) r[1]++;
		if (a > 35 && a <= 60) r[2]++;
		if (a > 60) r[3]++;
	}
	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%\n", (float)r[0]/n*100, (float)r[1]/n*100, (float)r[2]/n*100, (float)r[3]/n*100);
	return 0;
}
