//This program calculate the sum of odd number from 1 to 10 using do while loop.

#include <iostream>

using namespace std;

int main ()
	{
		int n = 1;
		int sum = 0;		
		
		do
			{
				sum = sum + n;
				n +=2;
			} while (n <= 10);
		
		cout << "Sum of odd number from 1 to 10 is = " << sum << endl;
	}
