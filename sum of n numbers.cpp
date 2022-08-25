//sum of n numbers
#include<iostream>
using namespace std;
main()
{
	int n , sum=0,i;
	cout<<"enter the value of n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"the total sum is"<<sum;
}
