#include <iostream>
 using namespace std;

 int main()
{
	long t;
	cin >> t;
	while(t--)
	{
		long long c,d,l,k;
		cin >> c >> d >> l;
		if(l%4 == 0)
		{
			if(l >= 4*d)
			{
				if(l== 4*d)
				{
					if(c <= 2*d)
						cout << "yes\n";
					else 
						cout << "no\n";
				}
				else
				{
					k=l - 4*d;
					long long j;
					j=k/4;
					if((k <= 4*c) && ((c-j <= 2*d)))
						cout << "yes\n";
					else 
						cout << "no\n";
				}
			}
			else
				cout << "no\n";
		}
		else 
			cout << "no\n";
	}
	return 0;
}
