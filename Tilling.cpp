#include<iostream>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--){

		int n,m;
		cin >> n >> m;

		int dp[n+1] = {0};

		for(int i=1;i<=n;i++){

			if(i<m){
				dp[i] = 1;
			}
			else if(i == m){
				dp[i] = 2;
			}
			else{
				dp[i] = (dp[i-1] + dp[i-m]) % 1000000007;
			}
		}

		cout << dp[n] << endl;
	}
	return 0;
}
