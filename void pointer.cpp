//types of pointers
//void pointer
#include<iostream>
using namespace std;
main()
{
	int a=10;
	float b=5.05;
	char c= 'a';
	void *p;
	p=&a;
	cout<<*(int*)p<<endl;
	p=&b;
	cout<<*(float*)p<<endl;
	p=&c;
	cout<<*(char*)p<<endl;
}
