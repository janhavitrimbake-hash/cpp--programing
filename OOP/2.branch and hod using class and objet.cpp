#include<iostream>
using namespace std;
class coll_info
{
	public:
	string branch,hod;
	void display()
	{
		cout<<"\nbranch:"<<branch;
		cout<<"\nhod:"<<hod;
	}	
};
int main()
{
	coll_info c;
	c.branch="computer";
	c.hod="pofle";
	c.display();
}
