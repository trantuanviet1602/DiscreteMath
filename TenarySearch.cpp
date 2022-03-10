#include <iostream>
using namespace std;
int tenarySearch(int x, int a[], int size)
{
	int i=0;
	int j=size-1;
	while(i<j)
	{
		int k=(2*i+j)/3;
		int m=(i+2*j)/3;
		if (x<=a[k]) j=k;
		else if (x<=a[m])
		{
			j=m;
			i=k+1;
		}
		else i=m+1;
	}
	if (x==a[i]) return i+1;
	else return 0;
}
int main()
{
	int size; cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int x; cin>>x;
	cout<<tenarySearch(x,a,size);
	return 0;
}
