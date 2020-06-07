#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n; cin>>n;
  int a[n];
  int count=0;
  int s,r;
  for(int i=0; i<n; i++)
   {
    cin>>n;
    while(n>0)
     {
      s=n%6;
      r=n/6;
      count=count+s;
     }
      a[i]=count;
      count=0;
    }

 for(int i=0; i<n; i++)
 {
   for(int j=i+1; j>i && j<n; j++)
   {
     if(a[j]<a[i])
     { count++;
     }
   cout<<count<<endl;
   }
 } return 0;
}
