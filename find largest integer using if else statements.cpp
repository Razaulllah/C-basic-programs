//find largest integer using if else statements among four numbers

#include <iostream>

using namespace std;

int main ()
{
	int a,b,c,d;
	
	cout << "Enter four integer" <<endl;
	cin >>a >>b >>c >>d;
	
	if ( a>b && a>c && a>d)
		{
			cout << "First number is largest";
		}
		
	else if (b>a && b>c && b>d)
		{
			cout << "Second number is largest";
		}
	
	else if (c>a && c>b && c>d)
		{
			cout << "Third number is largest";
		}
		
	else
		cout << "Four number is largest";
}
