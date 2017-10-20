#include<bits/stdc++.h>

using namespace std;
int compare (const void * a, const void * b)
{
	  return ( *(int*)a - *(int*)b );
}
int main()
{
	long long N;
	unsigned long long L,R;
	cin >> N >> L >> R;
	long long i,arr[N];
	
	for(i=0;i<N;i++)
	{
		cin >> arr[i];
	}
	qsort(arr,N,sizeof(long long),compare);
	long long min,max;
	long long d=0;
	for(i=0;i<N-1;i++)
	{
	min=arr[i+1]-arr[i];
	max=arr[i+1]+arr[i];
//	cout << min << " "<< max<<"\n";
	if(R<=min)
		d+=0;
	else if(L>=max)
		d+=0;
	else if(L>min && R<max)
		d++;
	else if(L<min && L<max)
		d++;
	else if (R>min && R<max)
		d++;
	}
	cout << d << "\n";
	return 0;
}
