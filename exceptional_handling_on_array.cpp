#include <iostream>

using namespace std;	

int main ()
{
	int a[3] = {1, 3, -1};
	
	for (int i = 0; i < 3; i++)
	{	
		int b = a[i];
		
		try
		{	
			if(b > 2)
			{
				cout << "\nThrow int"<< endl;
				throw b;
			}
			
			else
			{
				cout << "\nThrow char"<< endl;
				throw 'b';
			}
			
		}
		
		catch (int b)
		{
			cout << "catch int"<< endl;
			cout << "value is greater than 2" << endl;
		}
		
		catch (char b)
		{
			cout << "catch char"<< endl;
			cout << "value is less than or equal to 2" << endl;
		}
		
	}
	
}
