#include<iostream>
using namespace std;
class animal
{
	public:
		void display_animal()
	{
		cout<<"animal eat"<<endl;
	}
};
class dog:public animal
{
	public:
	void display_dog()
   {
   	cout<<"bark:"<<endl;
   }
};
class cat:public animal
{
	public:
	void diplay_cat()
	{
	cout<<"mew:"<<endl;	
	}	
};
int main()
{
	cat c;
	c.display_animal();
	c.diplay_cat();
	dog d;
	d.display_dog();
	d.display_animal();
	return 0;
}
