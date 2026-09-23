#include<iostream>
using namespace std;
class student
{
	public:
	string name,age;
	void display()
	{
		cout<<"\nname:"<<name;
		cout<<"\nage:"<<age;
	}	
};
int main()
{
	student *s=new student;
	s->name="janhavi";
	s->age="17";
	s->display();
}
