#include <iostream>
using namespace std;

int main() {

	long long int dp[30];

	dp[0] = 0;
	dp[1] = 2;
        dp[2] = 3;

	for(int i=3;i<30;i++) {

		dp[i] = dp[i-1] + dp[i-2];
	}

	int t;
	cin >> t;

	int i = 1;

	while(t--) {

		int n;
		cin >> n;

		cout << "#" << i << " : " << dp[n] << endl;

		i++;

	}

	return 0;
}
