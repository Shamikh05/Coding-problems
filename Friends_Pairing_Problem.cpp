#include <iostream>
using namespace std;

long long int dp[31];

void calc_ways() {

        dp[0] = dp[1] = 1;

        for(int i=2;i<31;i++) {
                dp[i] = dp[i-1] + ((i-1) * dp[i-2]);
        }
}

int main() {

        calc_ways();

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                cout << dp[n] << endl;
        }

        return 0;
}
