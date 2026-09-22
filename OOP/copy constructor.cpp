#include<iostream>
using namespace std;
class student

{
	public:
		int age;
		student(int a)
		{
			age=a;
		}
		student(student&s)
		{
			age=s.age;
		}
};
int main()
{
	student s1(25);
	student s2=s1;
	cout<<s2.age;
	return 0;
}
