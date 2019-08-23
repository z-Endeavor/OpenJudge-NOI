#include <iostream>
using namespace std;

int main(){
	int a, b, c, x, y, z;
	// xyz为该数的七进制 
	// 根据条件（49x+7y+z = 81z+9y+x）可以求得三位数码有关系为：24x-y=40z
	// x, y, z均小于7，且x和z不为0 
	for (x=1; x<7; x++) {
		for (y=0; y<7; y++) {
			for (z=1; z<7; z++) {
				if (24*x-y-40*z == 0) {
					a = x*7*7 + y*7 + z;
					b = x*100 + y*10 + z;
					c = z*100 + y*10 + x;
					cout<<a<<endl<<b<<endl<<c;
				}
			}
		}
	}  
	return 0;
} 
