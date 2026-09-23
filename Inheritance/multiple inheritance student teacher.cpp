#include<iostream>
using namespace std;
class teacher
{
	public:
		string name;
		int empid;
		void accept_teacher()
		{
			cout<<" enter the name";
			cin>>name;
			cout<<"enter the empid";
			cin>>empid;
		}
};
class student
{
	public:
		string sname;
		int rollno;
		void accept_student()
		{
			cout<<"enter the sname";
			cin>>sname;
			cout<<"enter the rollno";
			cin>>rollno;
		}
};
class info:public teacher,public student
{
	public:
		void display_info()
		{
	cout<<"name:"<<name<<endl;
	cout<<"empid:"<<empid<<endl;
	cout<<"sname:"<<sname<<endl;
	cout<<"rollno:"<<rollno<<endl;
}
};
int main()
{
	info i;
	i.accept_student();
	i.accept_teacher();
	i.display_info();
}


