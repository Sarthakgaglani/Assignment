#include<iostream>
using namespace std;
int main()
{
	int m,p,c,r,total=300;
	cout<<"Enter Maths marks: "<<endl;
	cin>>m;
	cout<<"Enter Physics marks: "<<endl;
	cin>>p;
	cout<<"Enter Chemistry marks: "<<endl;
	cin>>c;
	r=m+p+c;
	cout<<"Total marks of Maths, Physics, Chemistry are: "<<r<<endl;
	double per;
	per=(r/300.0)*100;
	cout<<"Your percentage is: "<<per<<"%"<<endl;
	if(per>75)
	{
		cout<<"Your Grade is A"<<endl;
	}
	else
	{
		cout<<"Your Grade is B"<<endl;
	}
	return 0;
}
