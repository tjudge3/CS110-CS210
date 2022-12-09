/* tjudge - Perimeter of Square*/
#include<iostream>
using namespace std;
float perim(float);
int main()
{
float sideA;
cout<<"Please enter the length of one side: ";
cin>>sideA;
cout<<"The Perimeter of the square is : "<<perim(sideA);
return 0;
}
float perim(float sideA)
{
    return (4*sideA);
}
