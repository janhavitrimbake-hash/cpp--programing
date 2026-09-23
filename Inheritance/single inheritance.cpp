#include<iostream>
using namespace std;
class A
{
	public:
	void display_A()
	{
		cout<<"parent class:";
	}	
};
class B:public A
{
	public:
	void display_B()
	{
		cout<<"child class:";
		}	
};
int main()
{
	B b;
	b.display_A();
	b.display_B();
	return 0;
}
