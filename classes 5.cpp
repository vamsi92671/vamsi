//object to class
#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rollno;
	char name[10];
	public:
		void getdata(int x, char y[])
		{
		 rollno=x;
		 strcpy(name,y);
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
    obj.getdata(226,"loki");
    obj.putdata();
}
