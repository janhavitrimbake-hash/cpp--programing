#include<iostream>
using namespace std;
class number
{
	private:
	int a=5;
	int b=3;
	public:
	void getdata()
	{
	a=5;
	b=3;
	}	
void display()
{
	if(a<b)
	cout<<"b is greter:"<<b;
	else
		cout<<"a is greter:"<<a;
}
};
int main()
{
	class number s;
	s.getdata();
	s.display();
	return 0;
}
