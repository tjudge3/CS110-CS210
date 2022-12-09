/* tjudge - smallest of two*/
#include <iostream>
using namespace std;
int main(){
int numA, numB, ans ;
cout<<"Please input first number: "; 
cin>>numA;
cout<<"Please input second number: "; 
cin>>numB;
if(numA<numB)
{
ans=numA;
}
else
{
ans=numB;
}
cout<<"The smallest of the two intergers is: "<<ans;
return 0;
}
