#include <iostream>
using namespace std;

int main(){
	int n, a[17], b[17], c[17], s1=0, s2=0, s3=0;
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>a[i]>>b[i]>>c[i];
		s1 += a[i];
		s2 += b[i];
		s3 += c[i];
	}
	printf("%d %d %d %d", s1, s2, s3, (s1+s2+s3));
	return 0;
}
