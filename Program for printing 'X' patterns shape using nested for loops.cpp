// This program prints the below pattern.
/*	      XXXXXXXXXX
           XXXXXXXX
            XXXXXX
             XXXX
              XX
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int s = 10;		
	for (int i = 10; i >= 1; i -=2)
		{
			s++;
			cout<<setw(s);
			for (int j = i; j > 0; j--)
				{
					cout<<"X";
					
				}
				cout<<endl;
		}
}
