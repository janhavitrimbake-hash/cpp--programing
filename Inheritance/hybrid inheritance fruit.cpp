#include<iostream>
using namespace std;
class fruit
{
	public:
		void diplay_fruit()
		{
			cout<<"fruit:";
		}
};
class mango: virtual public fruit
{
	public:
	void display_mango()
	{
		cout<<"mango:";
		}	
};
class orrange: virtual public fruit
{
	public:
	void display_orrange()
	{
		cout<<"orrrange:";
		}	
};
 class fruit_salad:public mango,public orrange
 {
 	public:
 	void display_fruit_salad()
	 {
	 	cout<<"fruit salad:";
		 }	
 };
 class fruit_stall:public fruit_salad
 {
 	public:
 	void display_fruit_stall()
 	{
 		cout<<" fruit stall:";
	 }
 };
 class retaile_stall: public fruit_stall
 {
 	public:
 	void display_retail_stall()
	 {
	 	cout<<"retaile_stall:";
	 }	
 };
 class juce_stall:public fruit_stall
 {
 	public:
 	void display_juce_stall()
	 {
	 	cout<<"juce stall:";
	}	
 };
 int main()
 {
 	fruit_salad f;
 	f.diplay_fruit();
 	f.display_mango();
 	f.display_orrange();
 	f.display_fruit_salad();
 	
    juce_stall j;
    j.display_fruit_stall();
    j.display_juce_stall();
    retaile_stall r;
    r.display_fruit_stall();
    r.display_retail_stall();
    return 0;
 }
