#include<iostream>
using namespace std;
int main()
{
  int n; cin>>n;
    int sum=0;
    int flag=0;

  for(int i=1; i<=n; i++)
  {
    sum=sum+i;
    if(sum==n)
    flag=1;
  }
  if(flag==1)
  cout<<"it is perfect number"<<endl;
  else cout<<"it isnot";
}
