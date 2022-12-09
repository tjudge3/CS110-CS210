/* tjudge - Assignment 1*/
#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your first name: ";
  getline (cin, fullName);
  int Age;
  cout << "Type your age: ";
  getline (cin, Age);
  float Pi;
  cout << "Type Pi: ";
  getline (cin, Pi);   
  cout << "Hi" << fullName;
  return 0;
}
