#include <bits/stdc++.h>

using namespace std;

void closestPallin(long long int N)
{
  string s;
  stringstream temp;
  temp << N;
  s=temp.str();
  //cout << s.length() << endl;
  int mid=(s.length())/2;
  int length = s.length();

  for(int i=0;i<mid;i++)
  {
    if(s[i]!=s[length-1-i])
    {
      s[length-1-i]=s[i];
    }
  }
  cout << s << endl;
}
int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    long long int N;
    cin >> N;
    closestPallin(N);
  }
  return 0;
}
