#include <iostream>
using namespace std;
int main()
{
	int n;
	int count=0;
	cin>>n;
	while(n!=1)
	{
		n=n%2==0?n/2:(n*3+1)/2;
		count++;
	}
	cout<<count<<endl;
 } 
