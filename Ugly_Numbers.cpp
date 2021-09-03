#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define N 1000001

int main() {

        vector<long long int> ugly(N,0);

        long long int a, b, c;

        ugly[0] = 0;
        ugly[1] = 1;

        long long int p2 = 1;
        long long int p3 = 1;
        long long int p5 = 1;

        for(long long int i=2;i<=N;i++) {

                a = 2 * ugly[p2];
                b = 3 * ugly[p3];
                c = 5 * ugly[p5];

                if(a <= b && a <= c) {
                        ugly[i] = a;
                        p2++;
                }
                if(b <= c && b <= a) {
                        ugly[i] = b;
                        p3++;
                }
                if(c <= b && c <= a) {
                        ugly[i] = c;
                        p5++;
                }
        }


        int t;
        cin >> t;

        while(t--) {

                long long int n;
                cin >> n;

                cout << ugly[n] << endl;


        }

        return 0;
}
