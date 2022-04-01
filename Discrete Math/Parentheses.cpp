#include <iostream>
#include <vector>
#include <string>
using namespace std;
void balance(int n, int open, int close, string s, vector <string> &answer)
{
	if(open==n&&close==n)
	{
		answer.push_back(s);
		return;
	}
	if(open<n)	balance(n,open+1,close,s+"(",answer);
	if(close<open) balance(n,open,close+1,s+")",answer);
	
}
int main()
{
	int n; cin>>n;
	vector <string> balancePnt;
	for(int i=0;i<=n;i++)
	{
		balance(i,0,0,"",balancePnt);
	}
	for(int i=0;i<balancePnt.size();i++)
	{
		cout<<balancePnt[i]<<endl;
	}	
	return 0;
}
