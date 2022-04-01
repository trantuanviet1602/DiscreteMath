#include <iostream>
#include <string>
using namespace std;
string min(string a, string b)
{
	if(a>b) return b;
	else return a;
}
string minNumber(string s)
{
	if(s.size()==1) return s;
	else return min(s.substr(0,1),minNumber(s.substr(1,s.size())));
}
int main()
{
	string s; cin>>s;
	cout<<minNumber(s);
	return 0;
}
