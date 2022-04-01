#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string> arr(int n)
{
	vector<string> returning;
	if(n==1) returning.push_back("()");
	else
	{
		vector <string> previous=arr(n-1);
		for(int i=0;i<previous.size();i++)
		{
			returning.push_back(previous[i]+"()");
			returning.push_back("()"+previous[i]);
			returning.push_back("("+previous[i]+")");
		}
	}
	return returning;
}
int main()
{
	int n; cin>>n;
	vector<string> array[n];
	for(int i=0;i<n;i++)
	{
		array[i]=arr(i+1);
	}
	for(int i=0;i<n;i++)
	{
		sort(array[i].begin(),array[i].end());
		for(int j=0;j<array[i].size();j++)
		{
			if(j<array[i].size()-1)
			{
				if(array[i][j]!=array[i][j+1])cout<<array[i][j]<<" ";
			}
			if(j==array[i].size()-1) cout<<array[i][j];
		}
		cout<<endl;
	}
}
