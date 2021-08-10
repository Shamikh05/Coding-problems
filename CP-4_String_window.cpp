#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {

	string str1, str2;

	getline(cin,str1);
	getline(cin,str2);

	int s1 = str1.size();
	int s2 = str2.size();

	int l=0, r;

	map<char, int> m1, m2;

	int resl = -1, resr = 1e9;

	for(auto x : str2) {
		m2[x]++;
	}

	for(r=0;r<s1;r++) {

		m1[str1[r]]++;

		bool good = true;

		for(auto x : m2){
			if((m1.count(x.first)==0) || m1[x.first] < x.second) {
				good = false;
				break;
			}
		}

		if(!good) {
			continue;
		}

		while(l<s1 && l<=r && (m2.count(str1[l])==0 || m1[str1[l]] > m2[str1[l]])) {

			m1[str1[l]]--;

			if(m1[str1[l]]==0){
				m1.erase(str1[l]);
			}

			l++;
		}

		//cout << l << " " << r << endl;

		if(resr-resl+1 > r-l+1) {
			resl = l;
			resr = r;
		}
	}

	//cout << resl << " " << resr;

	if(resl==-1) {
		cout << "No String" << endl;
	}
	else {
		cout << str1.substr(resl,resr-resl+1) << endl;
	}

	return 0;
}
