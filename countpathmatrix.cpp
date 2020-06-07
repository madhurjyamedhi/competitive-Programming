//The task is to count all the possible paths from top left to bottom right of a m x n matrix with the constraints that from each cell you can either move only to right or down.
#include<iostream>
using namespace std;
int countpath(int x, int y)
{
  if(x==0 && y==0) return 0;
  else if(x==1 || y==1) return 1;
  else
  return countpath(x,y-1) + countpath(x-1,y);

}
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    cout<<countpath(n,m)<<endl;
  }
  return 0;
}
