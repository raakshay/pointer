#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p=&a;
	int **dp=&p;		// double pointer
	cout<<"\na=10"<<"\n*p=&p"<<"\n**dp=&p";
	cout<<"\np:"<<p<<endl;
	cout<<"\n**dp:"<<**dp<<endl;
	cout<<"\n*p:"<<*p<<endl;

	return 0;
}
