#include<iostream>
using namespace std;
 int x=20;
int main()
{
	int x=25;
	cout<<"local:"<<x;
	cout<<"global:"<<::x;
	
}
