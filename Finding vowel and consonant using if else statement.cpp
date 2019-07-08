//Finding vowel and consonant using if else statement

#include <iostream>

using namespace std;

int main ()
	{
		char ch;
		cout << "Enter Alphabit" <<endl;
		cin >>ch;
		
		if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			{
				cout << "It is vowel"<<endl;
			}
			
		else
			{
				cout << "It is consonant"<<endl;
			}
	}
