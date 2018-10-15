#include <bits/stdc++.h>
#define N 10005
using namespace std;

int main()  {
    int n,a;
    cin>>n;
    for (int i=0;i<=n;i++)   {
        int cnt=0,bi[N];
        //cin>>a;
        a=i;
        if (!a) {cout<<0<<endl;continue;}
        while (a)   {
            bi[cnt++]=(a&1);
            a>>=1;
        }
        reverse(bi,bi+cnt);
        for (int k=0;k<cnt;k++) cout<<bi[k];
        cout<<endl;
    }
}
