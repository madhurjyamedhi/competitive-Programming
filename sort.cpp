#include<iostream>
#include<algorithm>
 using namespace std;
 void show(int a[])
	{
	for(int i=0;i<10;i++)
	cout<<a[i]<<""<<endl;
	}
	
  int main()
	{
	int a[10]={1,5,4,7,9,2,3,8,10,6};
	cout<<"\n the array before sorting: "<<endl;
	show(a);
	
	sort(a ,a+10);
	cout<<"\n the array after sorting: "<<endl;
	show(a);
	
	return 0;
	}

