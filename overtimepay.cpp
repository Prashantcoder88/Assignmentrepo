// Program for calc. overtime pay of employee.

#include <iostream>

using namespace std;
int main()
{
  int main() {
    int n=1, hours;                     //n no. of employee
    int pay;
    while(n<=10)
    {
        pay = 0;
        cout<<"enter hours worked by employee: ";
        cin>>hours;
        
        if(hours>40)
        {
            pay = (hours-40)*12;
            
        }
        cout<<"overtime pay: "<< pay<<endl;
        n++;
    }
    return 0;
    
}