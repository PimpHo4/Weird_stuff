//Palindrome number program

#include <iostream>
using namespace std;

int main() {
	int number, rev, n, fart;
	int i=1, koy;
	
	cout << "Number?: ";
	cin  >> number;
	
	for (koy = number; number !=0; number = number/10) {
		n = number % 10;
		rev = rev*10 + n;
	}
	
	cout << "reverse of number: " << rev << endl;
	
	if (koy == rev) 
		cout << koy << " is a palindrome.\n";
	else 
		cout << koy << " is no palindrome." << endl;
		
	return(0);
}
