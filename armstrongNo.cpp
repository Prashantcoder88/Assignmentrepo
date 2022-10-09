#include<iostream>
using namespace std;

 int main()
	{
	int n, sum=0, r, temp;
	cout<<"Enter the no. ";
	cin>>n;
	temp = n;
	while(n>0)
		{
			r = n%10;
			sum = sum + (r*r*r);
			n = n/10;
		}
			if(temp==sum)
				{
				cout<<"No. is Armstrong no.";
				}
			else
				{
				cout<<"No. is not Armstrog no.";
				}
			return 0;
	}		