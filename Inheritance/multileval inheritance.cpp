#include<iostream>
using namespace std;
class gfather
{
	public:
	void display_gfather()
	{
		cout<<"\n kacharu:";
	
	}	
};
class father:public gfather
{
	public:
	void display_father()
	{
		cout<<"\n rohidas:";
	}	
};
class me:public father
{
	public:
	void display_me()
	{
		cout<<"\n janhavi:";
		}	
};
int main()
{
	me m;
	m.display_father();
	m.display_gfather();
	m.display_me();
	return 0;
}
