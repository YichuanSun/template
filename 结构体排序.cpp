#include <bits/stdc++.h>
using namespace std;
typedef pair<int,double> term;
vector<term> terms[2];
bool cmp(const term a,const term b)  {
    return a.first>b.first;
}
int main()  {
    int n,a;
    double b;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a;
        cin>>b;
        terms[0].push_back(make_pair(a,b));
    }
    sort(terms[0].begin(),terms[0].end(),cmp);
    for (auto d:terms[0])    {
        cout<<d.first<<' '<<d.second<<endl;
    }
    return 0;
}
