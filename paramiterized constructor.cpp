#include<iostream>
using namespace std;
class student
{
	int age;
	public:
		student(int a)
		{
			age=a;
		}
		void display()
		{
			cout<<age;
		}
};
int main()
{
	student s(25);
	s.display();
}
