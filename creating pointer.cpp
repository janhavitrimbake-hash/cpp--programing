#include<iostream>
using namespace std;
int main()
{
	int *age=new int;
	*age=17;
	cout<<"age:"<<*age;
	delete age;
	return 0;
}
