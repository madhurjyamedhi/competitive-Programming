#include<iostream>
#include<string.h>
 using namespace std;
	int main()
	{
	 string s="imthebadest";
	char p[s.length()];
	
	int i;
	for(i=0;i<sizeof(p);i++)
	 {
	   p[i]=s[i];
	   cout<<p[i]<<"\n";

	}
	return 0;
}

