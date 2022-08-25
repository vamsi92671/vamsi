//classes using pointers
#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[10];
	public:
		void getdata()
		{
			cout<<"enter the values of roll no and name";
			cin>>rollno>>name;
		
		}
		void putdata()
		{
			cout<<"rollno is"<<rollno<<endl;
			cout<<"name is"<<name;
		}
};
main()
{
	class student obj;
	class student *p;
	p=&obj;
	p->getdata();
	p->putdata();
}
