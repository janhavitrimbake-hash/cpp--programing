#include<iostream>
using namespace std;
class college
{
	public:
		string name;
		int college_code;
		void accept_college()
		{
			cout<<"enter the name";
			cin>>name;
			cout<<"enter the college code";
			cin>>college_code;
		}
};
class student:public college
{
	public:
		string sname;
		int rollno;
		void accept_student()
		{
			cout<<"enter the sname";
			cin>>sname;
			cout<<"enter the  rollno";
			cin>>rollno;
		}
void display()
{
	cout<<"name:"<<name<<endl;
	cout<<"college_code:"<<college_code<<endl;
	cout<<"sname:"<<sname<<endl;
	cout<<"rollno:"<<rollno<<endl;
}
};
int main()
{
	student s;
	s.accept_college();
	s.accept_student();
	s.display();
	return 0;
}
