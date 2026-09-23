#include<iostream>
using namespace std;
class father
{
	public:
		void display_father()
		{
			cout<<"rohidas:";
		}
};
class mother
{
	public:
	void display_mother()
	{
		cout<<"alka:";
}
};
class child: public father,public mother
{
	public:
	void display_child()
	{
		cout<<"janhavi:";
		}	
};
int main()
{
	child c;
	c.display_father();
	c.display_child();
	c.display_mother();
	return 0;
}
