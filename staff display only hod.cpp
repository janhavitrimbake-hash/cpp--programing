#include<iostream>
using namespace std;
class staff
{
	public:
	string name ,post;
	void display()
	{
		if(post=="hod")
		cout<<" print name of HOD:"<<name;

	}	
};
int main()
{
	staff s1,s2,s3,s4;
	s1.name="janhavi";
	s1.post="prophesor";
	s1.display();
	s2.name="priya";
	s2.post="hod";
	s2.display();
	s3.name="kriyansh";
	s3.post="hod";
	s3.display();
	s4.name="aditi";
	s4.post="principal";
	s4.display();
	return 0;
}
