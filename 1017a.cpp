// #include <bits/stdc++.h>
// using namespace std;
// main()
// {
//     int t, a, b, c, d, suma = 0, sumb = 0, sumc = 0, sumd = 0;
//     cin >> t;
//    for(int i=1;i<=)
//     cout<<suma<<endl;
//     cout<<sumb<<endl;
//     cout<<sumc<<endl;
//     cout<<sumd<<endl;
//     if (suma > sumb && suma > sumc && suma > sumd)
//         cout << "1";
//     else if (sumb > suma && sumb > sumc && sumb > sumd)
//         cout << "2";
//     else if (sumc > suma && sumc > sumb && sumc > sumd)
//         cout << "3";
//     else
//         cout << "4";
// }


#include<stdio.h>
#include<string.h>
main(){
    char str[100];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==" ")
        printf("\n");
        else
        printf("%s",str[i]);
    }
}