# include<iostream>
using namespace std;
class number
{
	private :
	int n=5;
	public:
	void getdata()
	{
		n=5;
	}

	void display()
	{
	if(n%2==0)
	cout<<"even"<<n;
	else
	cout<<"odd"<<n;
}
};
int main()
{
	class number a;
	a.getdata();
	a.display();
	return 0;
} 
