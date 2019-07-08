//If you enter 'm' show you are male else you are female using conditional operator 

#include <iostream>

using namespace std;

int main ()
	{
		char ch;
		cout << "Enter a character" <<endl;
		cin >> ch;
		
		(ch == 'm')? cout <<"You are male" :  cout <<"You are female";
		
	}
