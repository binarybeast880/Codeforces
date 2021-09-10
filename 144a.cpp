#include <bits/stdc++.h>
using namespace std;
main(){
        int a[100], n, maxh, minh, maxindex, minindex;
        cin >> n >> a[0];
        maxh = a[0], minh = a[0], maxindex = 1, minindex = 1;
        for(int i = 1 ; i < n; i ++){
            cin >> a[i];
            if(a[i] > maxh){
                maxh = a[i];
                maxindex = i + 1;
            }
            if(a[i] <= minh){
                minh = a[i];
                minindex = i + 1;
            }
        }
        if(a[0] == maxh && a[n-1] == minh)
            cout << 0 << endl;
        else
            if(maxindex < minindex)
                cout << (maxindex - 1) + (n - minindex) << endl;
        else
            cout << (maxindex - 1) + (n - minindex) - 1 << endl;
    }

