#include <iostream>
using namespace std;

#define int long long

bool can_give_scholarship(int n, int candidates, int m, int x, int y) {

        int scholarships = m + (n - candidates)*y;

        if(candidates*x <= scholarships)
                return true;
        return false;
}

signed main() {

        int n, m, x, y;
        cin >> n >> m >> x >> y;

        int s = 1;
        int e = n;

        int ans = 0;

        while(s <= e) {

                int mid = (s + e)/2;

                if(can_give_scholarship(n,mid,m,x,y)) {
                        ans = mid;
                        s = mid + 1;
                }
                else {
                        e = mid - 1;
                }
        }

        cout << ans << endl;

        return 0;
}
