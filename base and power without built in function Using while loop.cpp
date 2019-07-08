//This program finds/calculate power without any built in function using while loop
#include <iostream>

using namespace std;

int main ()
	{
		int p,b;
		int res  = 1;
		
		cout << "Enter base "<< endl;
		cin >>b;
		
		cout << "Enter power "<< endl;
		cin >> p;
		cout << b <<" power "<< p << " is : ";
		while (p != 0)
			{
				p--;
				res *= b;
			}
			cout <<res;				
	}
