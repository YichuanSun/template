//十进制转二进制数组
#include <bits/stdc++.h>
#define N 10005
using namespace std;
void pfbin(int a);
int main()  {
    int n,a;
    cin>>n;
    for (int i=0;i<=n;i++)   {
        cin>>a;
        pfbin(a);
    }
}

void pfbin(int a)   {
    int cnt=0,bi[N];
    if (!a) {cout<<0<<endl;return;}
    while (a)   {
        bi[cnt++]=(a&1);
        a>>=1;
    }
    reverse(bi,bi+cnt);
    for (int k=0;k<cnt;k++) cout<<bi[k];
    cout<<endl;
}

//十进制转二进制数组 end