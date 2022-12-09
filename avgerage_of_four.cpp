/* tjudge - Midterm - Average of four */
#include <iostream>
using namespace std;
int main()
{
double numA,numB,numC,numD,sum,avg;
cout<<"Please input four numbers : ";
cin>> numA >> numB >> numC >> numD;
sum=numA+numB+numC+numD;
avg=sum/4;
cout<<"The average of the four numbers is : "<< avg << endl;
cout << endl;
return 0;
}
