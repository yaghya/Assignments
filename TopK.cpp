#include<bits/stdc++.h>

using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector< pair<int,int> > V;
    for(int i=0;i<n;i++)
    {
      int a;
      cin >> a;
      V.push_back(make_pair(a,i));
    }
    sort(V.begin(),V.end());

    int k,val,i;
    cin >> k ;
    for(i=0;i<k;i++)
    {
      cout << V[i].second << " " ;
      val=V[i].first;
    }
    while(val==V[i].first)
    {
      cout << V[i].second << " " ;
      i++;
    }
    cout << endl;
  }


  return 0;
}
