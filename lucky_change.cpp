/* tjudge - lucky number*/
#include <iostream>
using namespace std;
main()
{
int luckynum;
int quit;
while (quit!=0) 
{
cout<<" Please enter your lucky number: ";
cin>>luckynum;
cout<<" Would you like to change your lucky number? Press 1 to change or 0 to quit " <<endl;
cin>>quit;
}
cout<<" Goodbye "<<endl;
return 0;
}


