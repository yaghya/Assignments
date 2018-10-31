#include <bits/stdc++.h>

using namespace std;

void FindOverlap(vector<int> A,vector<int> D,int n)
{
  //cout<< A[0] << endl;
  sort(A.begin(),A.end());
  sort(D.begin(),D.end());
  //cout << A[0] << endl;
  int pres=1,res=0;
  for(int i=1,j=0;i<n && j<n;)
  {
    if(A[i]<D[j])
    {
      pres++;
      i++;
      if (pres>res)
        res=pres;
    }
    else
    {
      pres--;
      j++;
    }
  }

  cout <<"Result" << res << endl;
}
int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;
    vector<int> A,D;
    for(int i=0;i<n;i++)
    {
      int a;
      cin >> a;
      A.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
      int a;
      cin >> a;
      D.push_back(a);
    }

    FindOverlap(A,D,n);
  }

  return 0;
}
