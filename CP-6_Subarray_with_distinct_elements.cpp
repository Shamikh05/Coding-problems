#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define N 1000000007
#define int long long

signed main() {

	int n;
	cin >> n;

	vector<int> v;

	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}

	int i = 0;
	int j = 0;
	int answer = 0;

	int start = 0;
	int end = 0;

	for(int i=0;i<n;i++) {

        while(j<n and find(v.begin(),v.end(),a[j])==v.end()) {

			v.push_back(a[j]);
            j++;

        }

		answer += ((j-i)*(j-i+1))/2;
		v.erase(v.begin());

	}

	/*while(j<n) {

		if(find(v.begin(),v.end(),a[j])==v.end()) {

			v.push_back(a[j]);
			j++;
			end = j;
		}
		else {
			v.erase(v.begin());
			i++;

			start = i;
		}

		answer += ((end-start)*(end-start+1))/2;

	}*/

	cout << answer % N << endl;

	return 0;
}
