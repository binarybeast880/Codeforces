


//RoY
//  Brute force approach

#include <bits/stdc++.h>
using namespace std;
main(){
int count=0,loop;
string str;
cin>>str;
int len=strlen(str);
//printf("Length of the string is %d\n",len);
//int alpha=0;
/*
for(int loop=0;loop<len;loop++){
if(str[loop]>='a' && str[loop]<='z'){
    alpha++;
}
}
*/
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
for(int it=0;it<len;it++){
    if(str[it]=='a')
        a=1;
    else if(str[it]=='b')
        b=1;
    else if(str[it]=='c')
        c=1;
    else if(str[it]=='d')
        d=1;
    else if(str[it]=='e')
        e=1;
    else if(str[it]=='f')
        f=1;
    else if(str[it]=='g')
        g=1;
    else if(str[it]=='h')
        h=1;
    else if(str[it]=='i')
        i=1;
    else if(str[it]=='j')
        j=1;
    else if(str[it]=='k')
        k=1;
    else if(str[it]=='l')
        l=1;
    else if(str[it]=='m')
        m=1;
    else if(str[it]=='n')
        n=1;
    else if(str[it]=='o')
        o=1;
    else if(str[it]=='p')
        p=1;
    else if(str[it]=='q')
        q=1;
    else if(str[it]=='r')
        r=1;
    else if(str[it]=='s')
        s=1;
        else if(str[it]=='t')
            t=1;
        else if(str[it]=='u')
            u=1;
        else if(str[it]=='v')
            v=1;
        else if(str[it]=='w')
            w=1;
        else if(str[it]=='x')
            x=1;
        else if(str[it]=='y')
            y=1;
        else if(str[it]=='z')
            z=1;
}
/*
int dupli=0;
for(int i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if((str[j]<='a' && str[j]<='z' && str[i]>='a' && str[i]<='z' && str[i]==str[j])){
                    dupli++;
                }
        }
        }
    printf("Total duplicates character is %d\n",dupli);
    int ans=alpha-dupli;
    printf("%d",ans);
}
*/
int ans=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z;
cout<<ans<<end;
}

