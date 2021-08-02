#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define N 1000000007

vector<vector<int> > mul_matrix(vector<vector<int> > a, vector<vector<int> > b) {

        vector<vector<int> > result(2, vector<int>(2,0));

        for(int i=0;i<2;i++) {

                for(int j=0;j<2;j++) {

                        for(int k=0;k<2;k++) {
                                result[i][j] = (result[i][j] + (a[i][k] * b[k][j] % N) % N);
                        }
                }
        }

        return result;
}

vector<vector<int> > matrixExponentiate(vector<vector<int> > &a, int n) {

        if(n==0) {
                int s = a.size();
                vector<vector<int> > ans(s, vector<int>(s,0));
                for(int i=0;i<s;i++) {
                        ans[i][i] = 1;
                }
                return ans;
        }

        if(n==1) {
                return a;
        }

        vector<vector<int> > temp = matrixExponentiate(a,n/2);

        vector<vector<int> > ans = mul_matrix(temp,temp);

        if(n&1) {
                ans = mul_matrix(ans,a);
        }

        return ans;
}

signed main() {

        int t;
        cin >> t;

        while(t--) {

                int n;
                cin >> n;

                vector<vector<int> > a(2,vector<int>(2,0));

                a[1][1] = a[0][1] = a[1][0] = 1;
                a[0][0] = 0;

                vector<vector<int> > ans = matrixExponentiate(a,n-1);

                cout << ans[1][1] % N << endl;

        }

        return 0;
}
