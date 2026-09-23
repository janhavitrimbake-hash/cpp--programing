#include<iostream>
using namespace std;
class rectangle
{
	int length,breadth,area;
	public:
	void accept()
	{
		cout<<"enter the length";
		cin>>length;
		cout<<"enter the breadth";
		cin>>breadth;
	}
void calculate()
{
	area = length *breadth;
}
void display()
{
	cout<<"area of rectaangle:"<<area<<endl;
}
};
int main()
{
	rectangle r;
	r.accept();
	r.calculate();
	r.display();
	return 0;
}
