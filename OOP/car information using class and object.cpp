#include<iostream>
using namespace std;
class car
{
	public:
	string model,industry,name;
	void display()
	{
	cout<<"\nmodel:"<<model;
	cout<<"\n industry:"<<industry;
	cout<<"\n name:"<<name;
		
     }	
};
int main()
{
	car c1,c2,c3;
	c1.model="suv";
	c1.industry="toyota";
	c1.name="fortunar";
	c1.display();
}
