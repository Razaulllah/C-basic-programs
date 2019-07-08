/*This program prints the following pattern
  XXXX
   XXX
    XX
     X
show this order*/

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
	{
		int n;
		cout << "How many lines you print in reverse order ?"<<endl;
		cin>>n;
		int s;
		
		for(int i = n,s=20; i>=1; i -=1,s++)
			{
				cout<<setw(s);
				for (int j = i; j >= 1; j--)
					
					cout<<"X";
					cout<<endl;
			}		
	}
