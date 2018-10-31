#include <bits/stdc++.h>

using namespace std;


void makepallin(string *arr)
{
  string s;
  s=*arr;
  int length= s.length();
  string c;
  c=c.append(s);
  cout << c << endl;
  int count=0;
  for (int i=0;i<length;i++)
  {
    int temp=0,flag=0;
    if(s[i]==s[length-1])
    {
      for(int j=0;j<length-i;j++)
      {
        //cout << s[j+i] << s[length-1 -j] << endl;
        if(s[j+i]!=s[length-1-j])
          {
            flag=1;
            //cout << count << endl;
            break;
          }
        else
          temp+=1;
      }
    }
    if(temp>count && flag==0)
      {

        count = temp;
        cout << "max length pallindrome " <<count  << endl;
      }
  }
  string res;
  for (int i=length-1-count;i>=0;i--)
  {
    string a;
    a=s[i];
    res=res.append(a);
  }
  cout<< res << endl;

}
int main()
{
  string s;
  cin >> s;
  makepallin(&s);
  return 0;
}
