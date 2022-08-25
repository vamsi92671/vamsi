#include<iostream>
using namespace std;
class employee
{
	int employeenumber,salary;
	char employeename[30];
	
	
	public:
		void balayya();
		void babu();
		
		
};
void employee::balayya()
		{
			cout<<"enter the employee name and salary and employeenumber";
			cin>>employeename>>salary>>employeenumber;
		}
	
		void employee::babu()
		{
			cout<<"\n employee name is"<<employeename;
			cout<<"\n employee salary is "<<salary;
			cout<<"\n employee number is"<<employeenumber;
			
		}
main()
{
	class employee obj;
	obj.balayya();
	obj.babu();
}
