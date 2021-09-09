/*
        1
        3*2
        4*5*6
        10*9*8*7
        ----------
*/


#include <iostream>
using namespace std;

int main() {

        int n;
        cout << "Enter number of rows : ";
        cin >> n;

        int even = 0;
        int odd = 0;
        int curr = 0;
        int j_limit = 1;

        for(int i=1;i<=n;i++) {

                if(i%2==0) {
                        even = odd + i - 1;
                        curr = even;

                        for(int j=1;j<=j_limit;j++) {

                                if(j%2==0) {
                                        cout << "*";
                                }
                                else {
                                        cout << even;
                                        even--;
                                }

                        }
                }
                else {

                        odd = curr + 1;

                        for(int j=1;j<=j_limit;j++) {

                                if(j%2==0) {
                                        cout << "*";
                                }
                                else {
                                        cout << odd;
                                        odd++;
                                }

                        }
                }

                j_limit += 2;

                cout << endl;


        }

        return 0;
}
