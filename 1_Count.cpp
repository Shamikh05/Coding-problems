#include <iostream>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;

	int arr[1000000];

	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}

	int l = 0;
	int r = 0;

	int zero_count = 0;
	int max_length = 0;
	int max = 0;

	int ind1 = -1;
	int ind2;

	while(l <= r and r < n) {

		if(zero_count <= k) {

			if(arr[r]==0)
				zero_count++;

			if(zero_count <= k) {

				max_length = r - l + 1;

				if(max_length > max) {
					max = max_length;
					ind1 = l;
					ind2 = r;
				}

			}

			r++;
		}

		if(zero_count > k) {

			if(arr[l]==0)
				zero_count--;
			l++;

		}
	}

	cout << max << endl;

	//cout << ind1 << " " << ind2 << endl;

        if(ind1 != -1) {

        for(int i=ind1;i<=ind2;i++) {

		if(arr[i]==0)
			arr[i] = 1;
	        }

        }

	for(int i=0;i<n;i++)
		cout << arr[i] << " ";



        return 0;
}
