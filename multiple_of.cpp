/* tjudge - multiple of*/
#include <iostream>
using namespace std;
int main(void) {
int moNum;	
cout << "Please enter an integer: ";
cin >> moNum;
if (moNum % 5 ==0)
{
cout << "Integer is a multiple of five";
}
else 
{
cout << "Interger is not a multiple of five";	
}
return 0;
}
