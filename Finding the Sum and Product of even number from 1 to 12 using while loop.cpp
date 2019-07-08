//This program finds the Sum and Product of even number from 1 to 12 using while loop

#include <iostream>

using namespace std;

int main ()
	{
		int n = 2;
		int sum = 0;
		int pro = 1;
		
		while (n <= 12)
			{
				sum += n;
				pro = pro * n;
				n +=2;
			}
		cout << "The Sum of even number from 1 to 12 is : "<< sum << endl;	
		cout << "The Product of even number from 1 to 12 is : "<< pro << endl;
	}
