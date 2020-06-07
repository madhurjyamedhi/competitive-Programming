#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n; cin>>n;  int new_n=n;
  int fact=1, temp; int sum=0;
  while(n!=0)
  {
    temp=n%10;
    for(int i=1; i<=temp; i++)
      { fact=fact*i; }
       cout<<"fact is "<<fact<<endl;
       sum=sum+fact; cout<<"sum is: "<<sum<<endl;
       fact=1;
       n=n/10;
  }
  if(sum==new_n)
    cout<<"it is strong number"<<endl;
    else
    cout<<"it is not"<<endl;
  }
