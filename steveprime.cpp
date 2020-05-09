#include<iostream>
#include<cstring>
using namespace std;

void sieve(int n)
{
bool prime[n+1];
memset(prime, true , sizeof(prime));
int p;
for(p=2; p*p<=n; p++)
 { 
  if(prime[p]==true) {
  for(int i=p*p; i<=n; i=i+p)
  prime[i]= false;
 } }
 for( int j=2; j<=n; j++)
  { if(prime[j]==true)
    cout<<j<<endl;
  }
}

int main()
{
int n; 
cout<<"enter which upto want to print: "<<endl;
cin>>n;
sieve(n);
}
 
