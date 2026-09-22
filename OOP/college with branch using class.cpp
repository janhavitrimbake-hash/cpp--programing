#include<iostream>
using namespace std;
class college
{
	public:
	string branch,hod;
	void dispaly()
	{
		cout<<"\n branch:"<<branch;
		cout<<"\n hod:"<<hod;
		}	
};
int main()
{
	college c;
	c.branch="computer";
	c.hod="pofle";
	c.dispaly();
	c.branch="civil";
	c.hod="kathar";
	c.dispaly();
}
