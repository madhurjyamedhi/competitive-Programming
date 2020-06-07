#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cin>>n;
  int h[n+1];
  int capa[n+1];

  for(int i=0; i<n; i++)
  {
    cin>>h[i];
    capa[i]=i+1;
  }
  cin>>m;
  int b[m+1];
  int res=0;
  int ctr=0;
  for(int i=0; i<m; i++)
  {
    ctr=0;
    cin>>b[i];
    for(int j=n-1; j>=0; j--)
    {
      if(b[i]<=h[j] &&  capa[j]!=0)
      {
        cout<<(j+1)<<" ";
        capa[j]--;
        ctr=1;
        break;
      }
    }
    if(ctr==0)
    {
      cout<<"0"<<" ";
    }
  }
}
