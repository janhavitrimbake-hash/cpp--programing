#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
	string name;
	student()
	{
		cout<<"consetructor is called";
	}		
};
int main()
{
	student s;
	return 0;
}
