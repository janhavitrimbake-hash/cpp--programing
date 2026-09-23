#include<iostream>
using namespace std;
class carmanufacturer
{
	public:
		string name;
		void accept_carmanufacturer()
		{
			cout<<"enter the name ";
			cin >>name;
		}
};
class carmodel:public carmanufacturer
{
	public:
		string model_name;
		int model_no;
		void accept_carmodel()
		{
			
			cout<<" enter the model name";
			cin>>model_name;
			cout<<" enter the model no";
	  cin>>model_no;
		}
};
class car:public carmodel
{
	public:
		string colour;
		int car_no;
		void accept_car()
		{
			cout<<" enter the car colour";
			cin>>colour;
			cout<<"enter the car no";
			cin>>car_no;
		}
void display()
{
	cout<<"name:"<<name<<endl;
	cout<<"model_name:"<<model_name<<endl;
	cout<<"model_no:"<<model_no<<endl;
	cout<<"car_no:"<<car_no<<endl;
	cout<<"colour"<<colour<<endl;
	} 
};
int main()
{
	car c;
	c.accept_carmodel();
	c.accept_carmanufacturer();
	c.accept_car();
	c.display();
	
}
