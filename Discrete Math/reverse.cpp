#include <iostream>
#include <string>
using namespace std;
string Reverse(string &s, int size)
{
	if(size==1) return s;
	else 
	{
		string s1=s.substr(0,1);
		s.erase(s.begin(),s.begin()+1);
		string temp=Reverse(s,size-1);
		string returning=temp+s1;
		return returning;
	}
	
}
int main()
{
	string s; getline(cin,s);
	int size=s.size();
	string returning=Reverse(s,size);
	cout<<returning;
}
