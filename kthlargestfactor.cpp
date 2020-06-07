#include<iostream>
using namespace std;
int main()
{
  int long long n;
  int k, c=0;
  cin>>n>>k;

  for(int i=n; i>=1; i--)
  {
    if(n%i ==0)
     c++;
    if(c==k)
    {
      cout<<i;
      break;
    }
  }
  if(k>c)
  cout<<1;
  return 0;
}
