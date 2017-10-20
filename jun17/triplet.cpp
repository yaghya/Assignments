#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long p,q,r;
		cin >> p>> q >> r;
		vector<long long > A,B,C,Acum,Ccum;
		Acum.push_back(0);
		Ccum.push_back(0);
		for(int i=1;i<=p;i++)
		{
			long long a;
			cin >> a;
			A.push_back(a);
			Acum.push_back((Acum[i-1]+a)%M);
		}
		for(int i=0;i<q;i++)
		{
			long long a;
			cin >> a;
			B.push_back(a);
		}
		for(int i=1;i<=r;i++)
		{
			long long a;
			cin >> a;
			C.push_back(a);
			Ccum.push_back((Ccum[i-1]+a)%M);
		}
		sort(A.begin(),A.end());
		sort(B.begin(),B.end());
		sort(C.begin(),C.end());
		long long sum=0;
		for(int i=0;i<q;i++)
		{
			long long y=B[i];
			vector<long  long>:: iterator up1,up2;
			up1=upper_bound(A.begin(),A.end(),y);
			up2=upper_bound(C.begin(),C.end(),y);
			long long x,z,j=0,k=0;
			j=(up1-A.begin());
			k=(up2-C.begin());
			x=Acum[j]%M;
			z=Ccum[k]%M;
			cout << j << k << endl;
			long long res;
			res=(((x*z)%M + (y*y*j*k)%M)%M + ((y*x*k)%M + (z*j*y)%M)%M)%M;
			sum=(sum+res)%M;
		}
		cout << sum << endl;

	}
	return 0;
}
