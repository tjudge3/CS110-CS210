/*  tjudge - address, value, pointer*/
#include<iostream>
using namespace std;
int main()
{
int numA,*pntr;
cout<< "Please input a number" << "\n";;
cin >> numA;
pntr=&numA;
cout << "The address of the variable is " << pntr << "\n";;
cout << "The value of the variable is " << *pntr << endl;
return 0;
}
