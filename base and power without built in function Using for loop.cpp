//This program finds/calcualute power without any built in function using for loop

#include <iostream>

using namespace std;

int main ()
	{
		int p,b;
		int res  =1;
		
		cout << "Enter base "<<endl;
		cin >>b;
		
		cout << "Enter power "<<endl;
		cin >>p;
		
		for (;  p !=0; p--)
			{
				res *=b;	
			}
			cout <<res;
				
	}
