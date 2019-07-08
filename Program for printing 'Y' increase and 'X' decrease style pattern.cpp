//This program prints the following pattern using for loops.

/*Y
  YY
  YYY
  YYYY
  XXXX
  XXX
  XX
  X
  */

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int s = 20;
	for (int i = 1; i <= 4; i++)		
		{
			cout<<setw(s);
			for (int j = 1; j<=i; j++)
				{
					cout<<"Y";
					
				}
				cout<<endl;
		}
				
	for (int i = 4; i >= 1; i--)
		{
			cout<<setw(s);
			for (int j = i; j >= 1; j--)
				{
					cout<<"X";
					
				}
				cout<<endl;
		}
}
