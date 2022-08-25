#include<iostream>
using namespace std;
class student
{
	int rollno,mthmarks,scimarks,engmarks;
	char name[30];
	int sum,avg;
	
	public:
		void balayya()
		{
			cout<<"enter the values of rollno and name and marks";
			cin>>rollno>>name>>mthmarks>>scimarks>>engmarks;
		}
		void thop()
		{
			sum=mthmarks+scimarks+engmarks;
			avg=sum/3;
		}
		void babu()
		{
			cout<<"\n rollno is="<<rollno;
			cout<<"\n name is "<<name;
			cout<<"\n total marks"<<sum;
			cout<<"\n average of marks is"<<avg;
		}
};
main()
{
	class student obj;
	obj.balayya();
	obj.thop();
	obj.babu();
}
