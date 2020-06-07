#include<iostream>
using namespace std;
int main()
{ int sum=0;
  int n; cin>>n;
  int first=0, second=1;
  int count=0;
  for(int i=1; i<=n+1; i++)
  {
    if(i<=1)
     sum=1;
     else
     {
       sum=first+second;
       first=second;
       second=sum;
     } //cout<<sum<<endl;
   } cout<<sum;

}
