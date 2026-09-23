#include<iostream>
using namespace std;
struct tender
{
	string tender_no,cost,company_name;
	void display()
	{
		cout<<"\n tender no:"<<tender_no;
		cout<<"\n cost:"<<cost;
		cout<<"\n company_name:"<<company_name;
	}	
};
int main()
{
	tender t1,t2;
	t1.tender_no="101";
	t1.cost="50000";
	t1.company_name="tata";
	t1.display();
	t2.tender_no="102";
	t2.cost="60000";
	t2.company_name="bajaj";
	t2.display();
	return 0;
}
