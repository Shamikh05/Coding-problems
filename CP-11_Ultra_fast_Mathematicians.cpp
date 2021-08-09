#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		string str1, str2;
		cin >> str1;
		cin >> str2;
		for(int i=0;i<str1.size();i++) {
			cout << (str1[i]^str2[i]);
		}
	}
	return 0;
}
