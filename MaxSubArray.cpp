#include <bits/stdc++.h>

using namespace std;

void findMaxSum(vector<int> V)
{
  long long int maxI=0,Max=-100000000;
  int start=0,end=0,s=0;
  for(int i=0;i<V.size();i++)
  {
    maxI=maxI+V[i];
    if(Max<maxI)
      {
        Max=maxI;
        start=s;
        end=i;
      }
    if(maxI<=0)
    {
      s=i+1;
      maxI=0;
    }
  }
  cout <<"start "<< start << " end " << end  << " " <<Max << endl;
}
int main()
{
  int n;
  cin >> n;
  vector<int> V;
  for (int i=0; i<n ; i++)
  {
    int a;
    cin >> a;
    V.push_back(a);
  }
  findMaxSum(V);
  return 0;
}
