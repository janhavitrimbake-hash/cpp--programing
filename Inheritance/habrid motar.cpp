#include<iostream>
using namespace std;
class vehical
{
	public:
		void display_vehical()
		{
			cout<<"vehical:"<<endl;
		}
};
class petrol: virtual public vehical
{
	public:
		void display_petrol()
		{
			cout<<"petrol"<<endl;
		}
};
class cng: virtual public vehical
{
	public:
		void display_cng()
		{
			cout<<"cng"<<endl;
		}
};
class habrid:public petrol,public cng
{
	public:
		void display_habrid()
		{
			cout<<"habrid"<<endl;
		}
};
int main()
{
habrid h;
h.display_vehical();
h.display_petrol();

cng C;
C.display_cng();
h.display_habrid();	
	return 0;
}
