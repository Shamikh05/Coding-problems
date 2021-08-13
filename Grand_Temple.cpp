#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;

	long long int x[n], y[n];

	for(int i=0;i<n;i++) {
		cin >> x[i] >> y[i];
	}

	sort(x,x+n);
	sort(y,y+n);

	long long int dx = 0, dy = 0;

	for(int i=1;i<n;i++) {
		dx = max(dx, x[i] - x[i-1] - 1);
		dy = max(dy, y[i] - y[i-1] - 1);
	}

	cout << dx*dy << endl;

	return 0;
}
