#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
   m %= (n * (n + 1) / 2);    //this line has been copied
   //i don't know how it works
    for (int i = 1; i <= n; ++i){
        if (m < i){
            break;
        }
        m -= i;
        if(i==n){
            i=1;
        }
    }
    cout << m << endl;
}
