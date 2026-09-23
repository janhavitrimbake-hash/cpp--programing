#include<iostream>
using namespace std;
class furniture
{
	public:
	string material;
	int price;
		void accept_furniture()
		{
			cout<<"enter the material";
			cin>>material;
			cout<<"entr the price";
			cin>> price;
		}
};
class table: public furniture
{
	public:
		int surface_area;
		int height;
		void accept_table()
		{
			cout<<"\n enter the surface area";
			cin>>surface_area;
			cout<<"\n enter the height";
			cin>>height;
		}
void display()
{
	cout<<"material:"<<material<<endl;
	cout<<"price:"<<price<<endl;
	cout<<"surface_area:"<<surface_area<<endl;
	cout<<"height:"<<height<<endl;
}
};
int main()
{
	table t;
	t.accept_table();
	t.accept_furniture();
	t.display();
	return 0;
}
