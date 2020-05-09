#include<iostream>
using namespace std;
void selectionsort(int a[], int n)
	{
	 for(int i=0; i<n; i++)
	  {
	    int min=i;
	      for(int j=1; j<n; j++)
		
	{
	  if(a[j]<a[min]);
	   min=j;
	  }
	
	int tmp=a[i];
	a[i]=a[min];
	a[min]=tmp;
	}
	}
 int main()
	{
	int a[]={2,6,3,7,8,18,23};
	selectionsort(a,7);
	for(int i=0;i<7;i++)
	cout<<a[i]<<" ";
	}
