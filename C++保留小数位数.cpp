//C++保留小数位数
#include <bits/stdc++.h>
using namespace std;

int main()	{
	double a;
	cin>>a;
	cout.setf(ios::fixed);
	cout<<setprecision(2)<<a<<endl;
	cout.unsetf(ios::fixed);
	return 0;
}

//C++保留小数位数 end