/* tjudge - pointer pointer, roger roger*/
#include<iostream>
using namespace std;
int main(){
int pntr;
cout<< "Please input a number (value)" << "\n";;
cin >> pntr;
int *B = &pntr;
int **A = &B;
cout<<"The value is " <<**A;
}
