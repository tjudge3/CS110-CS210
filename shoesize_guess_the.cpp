/* tjudge - guess the shoe size*/
#include <iostream>
using namespace std;
int main(){
int guess, size = 13, check;
cout << "Please guess the shoe size, (Whole numbers only): ";
while (guess != size)
{
cin >> guess;
if (guess==size){
cout << "Congrats! You are correct!" << endl;
break;
}
cout << "That shoe size was incorrect. Please try again.""\n\r";
cout<<"Do you want try again? 1 to continue 0 to exit""\n\r";
cin>>check;
if(check==0)
break;
cout << "Please guess the shoe size, (Whole numbers only): ";
}
cout << "Goodbye ";
return 0;
}

