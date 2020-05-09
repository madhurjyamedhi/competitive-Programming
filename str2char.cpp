#include<bits/stdc++.h>
using namespace std;

	int main()
	{
	
	string s="geeksforgeeks"; //declare a string
	
	int n= s.length(); //for getting the length
	
	char char_array[n+1];

	//copying str to char with c_str()
	strcpy(char_array, s.c_str());

	for( int i=0;i<n;i++)
	cout<<char_array[i]<<endl;;

 return 0;
 	}

	
	
