#include<iostream>
using namespace std;
int main()
{
	//constant value
	const float pi=3.14;
	//variable
	int age=21;
	float r=5.5;
	string name="Sarthak";
	char grade='A';
	//operations
	float area=pi*r*r;
	age =age+10;
	//displaying
	cout<<"Welcome "<<name<<endl;
	cout<<"Your age is "<<age<<endl;
	cout<<"Your grade is: "<<grade<<endl;
	cout<<endl;
	cout<<"Area is: "<<area<<endl;
	return 0;
}
