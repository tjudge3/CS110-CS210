/*  tjudge - larger of two numbers*/
#include<iostream>
using namespace std;
int larger(int numA, int numB) 
{
int result;
if (numA > numB)
result = numA;
else
result = numB;
return result; 
}
int main()
{
int numA, numB;
cout << "Please enter Integer A: ";
cin >> numA;
cout << "Please enter Integer B:";
cin >> numB;
cout<<"The larger of the two integers is "<<larger(numA,numB)<<endl;
return 0;
}
