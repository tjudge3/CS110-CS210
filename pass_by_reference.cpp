/* tjudge - Final - Question 4*/
/*Write a C++ program that inputs two integers then calls a function subtract, use pass by reference and 
allow the user to change his/her input values, then subtract the two numbers and return the difference.*/
#include<iostream>
using namespace std;
int subtract(int &num1, int &num2){	
cout<<"Enter a new first number:" << num1 ;
cin>>num1;
cout<<"Enter a new second number (Enter previous number if you'd like to keep that one):";
cin>>num2;
return num1-num2;
}
main(){
int num1,num2;
cout<<"Enter a first and second number";
cin>>num1>>num2;
cout<<subtract(num1,num2);
}
