#include<bits/stdc++.h>
using namespace std;
 int main()
	{
	//size of row
	int row=3;
	int colom[]={1,3,2};
	
	//create a vector of vector with size equal to row.
	vector<vector<int>> vec(row);
	for(int i=0;i<row;i++)
	{
	//size of colom
	int col;
	col=colom[i];
	
	//declare the ith row to size of coloum
	vec[i]=vector<int>(col);
	for(int j=0; j<col; j++)
		vec[i][j]=j+1;
	}
	
	for(int i=0; i<row; i++) {
		for(int j=0; j<vec[i].size(); j++)
	cout<<vec[i][j]<<" ";
	cout<<endl;
} }

