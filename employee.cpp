#include<iostream>
using namespace std;
class emp
{
	public:
	string name,id,city,salary;
	void display()
	{
	cout<<"\nname:"<<name;
	cout<<"\nid:"<<id;
	cout<<"\ncity:"<<city;
	cout<<"\nsalary:"<<salary;	
	}	
};
int main()
{
	emp e;
	e.id="45";
	e.name="janhavi";
	e.salary="43000";
	e.city="pune";
	e.display();
	return 0;
}
