/*This program prints stars in below pattern using setwidth function.
                   *
                  ***
                 *****
                *******
               *********
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{	
	int s,c;
	
	for (s=20, c=1; c<=10; c +=2, s--)
		{
			cout <<setw(s);	
			for (int i=1; i <=c; i++)	
				cout << "*";
				cout <<endl;
		}	
}
