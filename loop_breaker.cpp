/* tjudge - loop breaker*/
#include <iostream>
using namespace std;
int main(){
for (int lb = 0; lb < 100; lb++) {
if (lb == 50) {
break;
}
cout << lb << "\n\r";
}
}	
