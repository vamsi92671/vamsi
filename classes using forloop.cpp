#include<iostream>
using namespace std;
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
class student obj[5];
class student *p[5];
	p[5]=&obj[5];
	int rollno;
	char name[30];
	int i;
	for (i=1;i<=5;i++)
	{
		cout<<"enter the rollno and name = ";
	cin>>rollno>>name;
	p[i]->getdata(rollno,name);
		
	}
	   cout<<"\n \n";
	   for(i=1;i<=5;i++) 
	   {
	   	p[i]->putdata();
	   }

}
