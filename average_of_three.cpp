/* tjudge - average*/
#include <iostream>
using namespace std;
int main() {
cout << "Please input three numbers: ";
double numA, numB, numC;
cin >> numA >> numB >> numC;
double numSum = numA+numB+numC;
cout << "When added together the sum of the three numbers is: " << numSum << endl;
double numAvg = numSum/3.0;
cout << "The average the three numbers is: " << numAvg << endl;
}
