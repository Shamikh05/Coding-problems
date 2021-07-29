#include <iostream>
using namespace std;


int main() {

        long long int t;
        cin >> t;

        while(t--) {

                long long int n;
                cin >> n;

                long long int a[n] = {0};

                long long int sum = 0;

                long long int result[n] = {0};

                result[0]=1;

                for(int i=0;i<n;i++) {

                        cin >> a[i];
                        sum +=a[i];

                        sum %= n;
                        sum = (sum+n)%n;

                        result[sum]++;
                }

                long long int ans = 0;

                for(long long int i=0;i<n;i++) {
                        
                    long long int m = result[i];
                    ans += (m)*(m-1)/2;
                }

                cout << ans << endl;

        }

        return 0;
}
