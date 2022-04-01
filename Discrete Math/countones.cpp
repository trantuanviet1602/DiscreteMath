#include <iostream>
#include <string>
using namespace std;
int countones(string s)
{
	if(s.size()==1)
	{
		if (s=="0") return 0;
		else return 1;
	}
	else
	{
		if(s[0]=='0') return countones(s.substr(1,s.size()));
		else return 1 + countones(s.substr(1,s.size()));
	}
}
int main()
{
	string s; cin>>s;
	cout<<countones(s);
	return 0;
}
