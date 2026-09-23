#include<iostream>
using namespace std;
class student
{
	public:
	int roll_no;
	string name;
	void accept_student()
	{
		cout<<"enter the roll no";
		cin>>roll_no;
		cout<<" enter the name";
	cin>>name;
		}	
};
class test:public student
{
	public:
		int marks1,marks2;
		void accept_test()
		{
			cout<<" enter the marks1";
			cin>>marks1;
			cout<<"enter the marks2";
			cin>>marks2;
		}
};
class result:public test
{
	public:
		int total;
		void accept_result()
		{
			total=marks1+marks2;
		}
void display()
{
	cout<<"roll_no:"<<roll_no<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"marks1:"<<marks1<<endl;
	cout<<"marks2:"<<marks2<<endl;
	cout<<"total:"<<total<<endl;
}
};
int main()
{
	result s;
	s.accept_student();
	s.accept_test();
	s.accept_result();
	s.display();
}
