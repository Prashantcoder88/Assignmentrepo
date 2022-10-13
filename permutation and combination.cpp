#include<iostream>
 using namespace std;
int factorial(int y)
{
int i, fact = 1;
for(i = 2; i <= y; i++)
	{
		fact = fact * i;
	}
return fact;
}
int main()
{
int n, r;
	 int ncr, npr;
	 cout<< "Enter the value of n: ";
	 cin>> n;
	 
	 cout<<" Enter the value of r: ";
	 cin>> r;
	 
	 npr = factorial(n) / factorial(n-r);
	 ncr = npr /factorial(r);
	 
	 cout<<"ncr value = "<< ncr;
	 cout<<" npr value = "<< npr;
	 
	 return 0;
	 
}
	 