#include<iostream>
using namespace std;
int main()
{
  int y;
  cin>>y;
  if(y%4==0)
   cout<<"leap year"<<endl;
   else if(y%100==0)
   cout<<"isnot leap year"<<endl;
   else if(y%400==0)
    cout<<"leap year"<<endl;
    else
    cout<<"isnot leap year"<<endl;
}
