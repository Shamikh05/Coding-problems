#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int result[64] = {0};
	for(int i=0;i<n;i++) {
		int no;
		cin >> no;
		int j=0;
		while(no) {
			int last_bit = (no & 1);
			result[j] += last_bit;
			j++;
			no = no>>1;
		}
	}
	int num = 0;
	for(int i=0;i<64;i++) {
		result[i] %= 3;
		num += result[i]*pow(2,i);
	}
	cout << num << endl;
	return 0;
}
