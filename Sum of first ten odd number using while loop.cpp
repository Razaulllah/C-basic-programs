//This program finds the sum of odd number from 1 to 10 using while loop.

#include <iostream>

using namespace std;

int main ()
	{
		int n = 1;
		int sum = 0;
		
		while (n<=10)
			{
				sum = sum + n;
				n +=2;
			}
		cout << "Sum of odd number from 1 to 10 is = "<<sum<<endl;
	}
