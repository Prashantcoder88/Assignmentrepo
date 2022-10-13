// Program for calc. the sum of 1/1!+2/2!+3/3!......

#include <iostream>

using namespace std;
int main()
{
  int num = 1, i, n;
  float sum = 0.0, fact;
  cout<<"Enter the number of terms : "<<endl;
  cin>>n;
  while(num<=n)
  {
      fact = 1;
      for(i = 1; i<=num; i++)
      {
          fact = fact * i;
          
      }
      sum = sum + (num/fact);
      num++;
  }
    cout<<"Sum of n terms of series :"<<sum<<endl;
    return 0;
    
}