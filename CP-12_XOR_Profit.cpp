#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	while(a || b) {
		
		a = (a>>1);
		b = (b>>1);
	}
	return 0;
}
