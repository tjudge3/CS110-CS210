/* tjudge - Midterm - Menu Tax */
/*I'm kind of a Heinlein fan, so..*/
#include <iostream>
using namespace std;
int main(){
    int bookNum;
   float tax, subtotal, total, book1=9.99, book2=15.99,book3=7.59,book4=8.99;
   cout<<"Please choose a book below and enter the corresponding number "<<endl;
   cout<<"1- Stranger in a Strange Land $9.99 ""\n\r""2- The Moon is a Harsh Mistress $15.99 ""\n\r""3- Starship Troopers $7.59 ""\n\r""4- Time Enough for Love $8.99 "<<endl;
   cin >> bookNum;
	cout<<bookNum  <<"\n";
    tax=bookNum*.06;
    cout<<tax;
	total=bookNum+tax;
	cout<<"$" << total;
}	
