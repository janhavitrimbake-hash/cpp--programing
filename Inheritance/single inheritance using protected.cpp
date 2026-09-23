#include<iostream>
using namespace std;
class parent
{
	protected:
		int age=20;
		public:
			void display()
		{
			cout<<"age:"<<age<<endl;
		}
};
class child :public  parent
{
	public:
		string name;
		void show()
		{
			cout<<"janhavi:"<<name<<endl;
		}
};
int main()
{
	child c;
	c.show();
	c.display();
	return 0;
}
