#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cows_can_be_accomodated(int *arr, int n, int c, int min_distance) {

        int cow = arr[0];
        int count = 1;

        for(int i=1;i<n;i++) {

                if(arr[i]-cow >= min_distance) {
                        cow = arr[i];
                        count++;
                }
                if(count==c) {
                        return true;
                }
        }
        return false;
}

int compute(int *arr, int n, int c) {

        int ans = 0;

        int s = 0;
        int e = arr[n-1] - arr[0];

        while(s<=e) {

                int mid = (s + e)/2;

                if(cows_can_be_accomodated(arr,n,c,mid)) {
                        ans = mid;
                        s = mid + 1;
                }
                else {
                        e = mid - 1;
                }
        }
        return ans;
}

int main() {

        int n, c;
        cin >> n >> c;

        int a[n];

        for(int i=0;i<n;i++) {
                cin >> a[i];
        }

        sort(a,a+n);

        cout << compute(a,n,c) << endl;

        return 0;
}
