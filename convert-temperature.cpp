/* tjudge - Temperature Conversion*/
#include<iostream>
using namespace std;
int main()
{
float Ctemp, Ftemp;
cout << "Please input the temperature in Celsius: ";
cin >> Ctemp;
Ftemp = (Ctemp * 9.0) / 5.0 + 32;
cout << "The Fehrenheit temperature is: " << Ftemp << endl;
return 0;
}
