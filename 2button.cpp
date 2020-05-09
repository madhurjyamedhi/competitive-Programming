#include<iostream>
using namespace std;
int main()
{   int count=0;
    int n,m;
    cin>>n>>m;
    if(n>=m)
    {
      cout<<n-m<<endl;
    }
    else {
    while(m>n)
    { 
        if(m%2==0)
         {
            m=m/2; 
            count++; 
         }
         else {
             m=m+1;
             count++;
         }
    }
    cout<<count+(n-m)<<endl;
}
}