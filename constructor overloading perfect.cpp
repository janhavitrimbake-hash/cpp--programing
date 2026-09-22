#include<iostream>
using namespace std;
class student
{
	public:
	int age;
	student()
	{
		age=25;
		}	
		student(int a)
		{
			age=a;
		}
};
int main()
{
	student s1;
	student s2(25);
	cout<<"s1 age="<<s1.age<<endl;
	cout<<"s2 age="<<s2.age<<endl;
	return 0;
}
