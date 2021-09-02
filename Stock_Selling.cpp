#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

        int t;
        cin >> t;

        int a[100] = {0};

        while(t--) {

                int k, n;
                cin >> k >> n;

                for(int i=0;i<n;i++) {
                        cin >> a[i];
                }

                long long int dp[k+1][n];

                for(int i=0;i<=k;i++) {
                        dp[i][0] = 0;
                }

                for(int i=0;i<n;i++) {
                        dp[0][i] = 0;
                }

                for(int i=1;i<=k;i++) {

                        long long int maxDiff = dp[i-1][0] - a[0];

                        for(int j=1;j<n;j++) {

                                maxDiff = max(maxDiff, dp[i-1][j-1] - a[j-1]);


                                dp[i][j] = max(dp[i][j-1], a[j] + maxDiff);

                        }
                }

                /*for(int i=0;i<=k;i++) {
                        for(int j=0;j<n;j++) {
                                cout << dp[i][j] << " ";
                        }
                        cout << endl;
                }*/

                cout << dp[k][n-1] << endl;

                a[100] = {0};

        }

        return 0;
}
