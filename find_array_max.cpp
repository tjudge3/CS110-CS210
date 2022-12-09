/* tjudge - Final - Question 3 */
/*Write C++ program that calls a function findarrmax which passes an array to a function and 
the function searches through the array to find the max value, it then returns the max value.*/
#include<iostream>
using namespace std;
int findarrmax(int z[], int size){
int maxval=z[0],y;
for(y=1;y<size;y++){
if(z[y]>maxval)
maxval=z[y];
}
return maxval;
}
main(){
int array [] ={3,141,592,653,589,793,238,462,643,383};
cout<<findarrmax(array,10);
}
