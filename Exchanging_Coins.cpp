#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int compute(long long int n, map<long long int,long long int> &mp) {

        if(n==0 || n==1)
                return n;
        if(mp.find(n) != mp.end())
                return mp[n];
        return mp[n] = max(n, compute(n/2,mp) + compute(n/3,mp) + compute(n/4,mp));
}

int main() {

        map<long long int,long long int> mp;

        long long int n;
        cin >> n;

        long long int result = compute(n,mp);

        cout << result << endl;

        return 0;
}
