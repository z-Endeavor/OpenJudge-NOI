#include <iostream>
using namespace std;

int main(){
	int a[11];
	float sum = 0, p[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
	for (int i=0; i<10; i++) {
		cin>>a[i];
		sum += p[i] * a[i]; 
	}
	printf("%.1f", sum);
	return 0;
}
