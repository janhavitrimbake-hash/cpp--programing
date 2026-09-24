#include<iostream>
using namespace std;
class collegestudent
{
	public:
	int student_id,college_code;
	void accept_coll()
	{
		cout<<"\nenter student id";
		cin>>student_id;
		cout<<"\n enter the college code";
		cin>>college_code;
		}	
};
class test: virtual public collegestudent
{
	public:
		int percentage;
		 void accept_test()
		 {
		 	cout<<"\n enter the percentage";
		 	cin>>percentage;
			}
};
class sport:virtual public collegestudent
{
	public:
		string grade;
		void accept_sport()
		{
			cout<<"\n enter the grade";
			cin>> grade;
	}
	};
	class result: public test,public sport
	{
		public:
			void display()
			{
		cout<<"student_id"<<student_id<<endl;
		cout<<" college-code"<<college_code;
		cout<<"\n percentage"<<percentage<<endl;
		cout<<"\n grade"<<grade<<endl;
	}
};
	int main()
	{
		result r;
		r.accept_coll();
		r.accept_test();
		r.accept_sport();
		r.display();
	}
