//cpp pro. to use stol() function

#include<bits/stdc++.h>
using namespace std;
	int main()
	{
	 //converting decimal no'
	string dec_num="987654321";
	cout<<"dec_num: "<<stol(dec_num,nullptr,10)<<"\n";

	//converting hexa. no:
	string hexno="fdedac";
	cout<<"hexno: "<<stol(hexno,nullptr,16)<<"\n";
	
	//coverting binary no:
	string binaryno="10100000100";
	cout<<"bnary no: "<<stol(binaryno,nullptr,2)<<"\n";
	
	return 0;
	}

