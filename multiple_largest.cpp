/* tjudge - multiple numbers - larger*/
#include <iostream>
using namespace std;
int main()
{
int usernum, num, i;
int largest = 0;
cout << "How many numbers do you wish to enter? ";
cin >> usernum;
for (i = 0; i < usernum; i++)
{
cout << "Please enter a number: ";
cin >> num;
if (num > largest)
largest = num;
}
cout << "The largest is: " << largest << endl;
return 0;
}


