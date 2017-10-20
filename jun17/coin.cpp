#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >>  t;
	while(t--)
	{
		long long u,v;
		cin >> u >> v;
		long long n=u+v+1;
		n=((n)*(n+1))/2;
		cout << n-v << endl;
	}
	return 0;
}
