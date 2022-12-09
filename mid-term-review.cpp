/* tjudge - Mid Term Review*/
#include <iostream>
using namespace std;
int main() {
    cout << "Please input four numbers: ";
    double NumA, NumB, NumC, NumD;
    cin >> NumA >> NumB >> NumC >> NumD;
    double NumSum = NumA+NumB+NumC+NumD;
    cout << "When added together the sum of the four numbers is: " << NumSum << endl;
    double NumAvg = NumSum/4.0;
    cout << "The average the four numbers is: " << NumAvg << endl;
}
