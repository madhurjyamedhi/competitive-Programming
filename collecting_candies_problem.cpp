#include<iostream>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int box; cin>>box;
    int a[box];
    for(int i=0; i<box; i++)
    {
      cin>>a[i];
    }
    int sum=0;
    int times[box];
    int j=0;
    for(int i=0; i<box; i++)
    {
      sum=sum+a[i];
      times[j]=sum;
      j++;
    }
    for(int j=0; j<box; j++)
    {
        cout<<"array new"<<times[j]<<endl;
    }
    int su=0;
    for(int i=1; i<j; i++)
    {
      su=su+times[i];
    }
    cout<<su<<endl;
  }
}
