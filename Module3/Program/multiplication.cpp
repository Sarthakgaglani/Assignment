#include<iostream>
using namespace std;
int main()
{
	int i,n,ans,count=1;
	cout<<"Enter the no. to have multiplication: "<<endl;
	cin>>n;
	for(i=1;i<=10;i++)
	{
		ans=n*i;
		cout<<n<<"*"<<i<<"="<<ans<<endl;	
	}
	return 0;
}
