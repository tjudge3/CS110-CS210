/* tjudge - random value*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
srand((unsigned) time(0));
for(int i=0;i<3;i++)
{
int num =(rand()%3) +1;
cout<<"The randomized value is : "<<num<<endl;
}
return 0;
}
