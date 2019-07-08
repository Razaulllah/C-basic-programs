//This program finds the sum of odd number from 1 to 10 using for loop.

#include <iostream>

using namespace std;

int main ()
	{
		int n;
		int sum = 0;
		
		for (n=1; n<=10; n +=2)
			{
				sum = sum + n;
			}

		cout << "Sum of odd number from 1 to 10 is = "<<sum<<endl;
	}
