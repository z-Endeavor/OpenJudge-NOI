#include <iostream>
using namespace std;

int a[110], b[110];
int main(){
	int n, Na, Nb, aWin = 0, bWin = 0;
	cin>>n>>Na>>Nb;
	for (int i=0; i<n; i++) {
		if (i<Na) cin>>a[i];
		else a[i] = a[i%Na];
	}
	for (int j=0; j<n; j++) {
		if (j<Nb) cin>>b[j];
		else b[j] = b[j%Nb];
	}
	for (int i=0; i<n; i++) {
		if ((a[i] == 0 && b[i] == 2) || (a[i] == 2 && b[i] == 5) || (a[i] == 5 && b[i] == 0)) aWin++;
		if ((b[i] == 0 && a[i] == 2) || (b[i] == 2 && a[i] == 5) || (b[i] == 5 && a[i] == 0)) bWin++;
	}
	if (aWin > bWin) cout<<"A";
	else if (aWin < bWin) cout<<"B";
	else cout<<"draw";
	return 0;
}
