#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool paranthas_can_be_prepared(int *arr,int n, int p, int min_time) {

        int count = 0;

        for(int i=0;i<n;i++) {

                int k = 1;
                int sum = 0;

                while(sum <= min_time) {
                        sum += arr[i]*k;
                        k++;
                        count++;
                }

                if(sum > min_time) {
                        count--;
                }

                if(count >= p) {
                        return true;
                }
        }
        return false;
}

int compute(int *a,int l, int p) {

        int s = 0;
        int e = (p*(p+1))/2;



        int ans = 0;

        while(s <= e) {

                int mid = (s + e)/2;

                if(paranthas_can_be_prepared(a,l,p,mid)) {
                        ans = mid;
                        e = mid - 1;
                }
                else {
                        s = mid + 1;
                }
        }

        return ans;
}

int main() {

        //Number of paranthas ordered
        int p;
        cin >> p;

        //Numbers of cooks available
        int l;
        cin >> l;

        //Rank of l number of cooks
        int rank[l];
        for(int i=0;i<l;i++) {
                cin >> rank[i];
        }

        cout << compute(rank,l,p) << endl;

        return 0;
}
