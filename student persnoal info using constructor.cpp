#include<iostream>

#include<string.h>
using namespace std;
class student
{
	public:
	string name ,age,city,mobileno;
	student(string a,string b,string c,string d)
	{
age=a;
name=b;
city=c;
mobileno=d	;
}
void display()
{
cout<<age;
cout<<name;
cout<<mobileno;
cout<<city;	
}
};
int main()
{
student s("\n25","\njanhavi","\n35776753493","\npune");
s.display();
}
