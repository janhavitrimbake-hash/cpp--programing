#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"consetructor is called";
		}
		~student()
		{
			cout<<"distructor is called";
		}
	};
		int main()
		{
			student s;
		}

