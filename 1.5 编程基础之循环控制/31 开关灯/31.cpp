#include <iostream>
using namespace std;

int main(){
	int light[5000], n, m;
	cin>>n>>m;
	for (int i=1; i<=n; i++) {
		light[i] = 0;
		for (int j=2; j<=m; j++) {
			if (i%j == 0) {
				light[i] = light[i] == 0 ? light[i] = 1 : light[i] = 0;
			}
		}
		if (light[i] == 0) {
			if (i == 1) printf("%d", i);
			else printf(",%d", i);
		}
	}
	return 0;
}
