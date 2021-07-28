#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main() {
	int n;
	cin >> n;
	priority_queue<int> pq;
	for(int i=0;i<n;i++) {
		int num;
		cin >> num;
		pq.push(num);
	}
	while(!pq.empty()) {
		int n1 = pq.top();
		pq.pop();
		int n2 = pq.top();
		pq.pop();
		int n3 = pq.top();
		pq.pop();
		if(n1!=n2 || n2!=n3 || n1!=n3) {
			cout << n1 << endl;
			break;
		}
	}
	return 0;
}
