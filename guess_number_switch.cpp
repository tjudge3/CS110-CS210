/* tjudge - guess the number - switch/
#include<iostream>
using namespace std;
int main() {
 
	int guessNum;
 
	cout << "Please enter a number between 1 and 5" << endl;
	cin >> guessNum;
 
	switch (guessNum) {
	case 1:
		cout << "Number 1 is incorrect" << endl;
		break;
 
	case 2:
		cout << "Number 2 IS the correct number" << endl;
		break;
 
	case 3:
		cout << "Number 3 is incorrect" << endl;
		break;
 
	case 4:
		cout << "Number 4 is incorrect" << endl;
		break;
 
	case 5:
		cout << "Number 5 is incorrect" << endl;
		break;
 
	default:
		cout << "Something went wrong ERROR: 3141592653" << endl;
 
	}
	
	return 0;
 
}
