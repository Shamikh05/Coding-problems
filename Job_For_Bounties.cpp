#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

        string str;
        getline(cin,str);

        int sum = 0;
        int ans = 0;

        stack<int> s;

        s.push(-1);

        for(int i=0;i<str.length();i++) {

                if(str.at(i)=='(')
                        s.push(i);
                else {
                        s.pop();

                        if(s.empty())
                                s.push(i);
                        else {
                                sum = i - s.top();
                                ans = max(ans,sum);
                        }

                }
        }

        cout << ans << endl;

        return 0;

}
