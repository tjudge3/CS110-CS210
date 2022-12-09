/* tjudge - midterm - Largest of three */
#include <iostream>
using namespace std;
int main()
{
int numA, numB, numC;
cout<<"Please input three integers : ";
cin>> numA >> numB >> numC; 
if (numA >= numB && numA >= numC)
cout << numA << " is the Largest";
else if (numB >= numA && numB >= numC)
cout << numB << " is the Largest";
else
cout << numC << " is the Largest";
return 0;
}
