/* tjudge - Final - Question 5*/
/* Write a c++ program that creates a decimal pointer, creates a variable set to a decimal value, 
then assigns the address of the variable to the pointer.
User the pointer to print out the address and the value being pointed to by the pointer.*/
#include<iostream>
using namespace std;
main(){
int *ptr;
int q=42;
ptr=&q;
cout<<"Address = "<<ptr<<"\nValue = "<<*ptr;
}


