#include<iostream>
using namespace std;
int main()
{
  int s, r;
  cin>>s>>r;
  int a[s];
  for(int i=0; i<s; i++) cin>>a[i];

  int l1,l2,c=0;
  for(int i=0; i<r; i++)
  {
   cin>>l1>>l2; }
   for(int i=0; i<r; i++)
   {
   for(int j=0; j<s;  j++)
     {
        if((a[j]>=l1) && (a[j]<=l2))
          c++;
      }
      cout<<c;
      c=0;
  }
  return 0;
}
