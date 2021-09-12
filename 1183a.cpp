#include<bits/stdc++.h>
using namespace std;
main(){
int n;
    cin >> n;
    while (true) {
        int temp = n;
        int sum = 0;
        while (temp) {
            sum+= temp% 10;
            temp/= 10;
        }
        if (sum % 4 == 0) {
            break;
        }
        n++;
    }
    cout << n ;
    return 0;
}
