#include <iostream>
using namespace std;

int main() {

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                long long int dp[n][2] = {0};

                dp[0][0] = 1;
                dp[0][1] = 1;
                dp[1][0] = 2;
                dp[1][1] = 1;

                for(int i=2;i<n;i++) {

                        dp[i][0] = dp[i-1][0] + dp[i-1][1];
                        dp[i][1] = dp[i-1][0];
                }

                cout << dp[n-1][0] + dp[n-1][1] << endl;
        }

        return 0;
}
