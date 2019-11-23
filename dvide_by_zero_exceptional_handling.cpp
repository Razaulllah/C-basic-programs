#include <iostream>

using namespace std;	

int main ()
{
	cout << "In main()" << endl;
	
	float a, b;
	
	cout << "\nEnter Nomenator: ";
	cin >> a;
	
	try
	{
		cout << "In try block" << endl;
		
		cout << "\nEnter denomenator: ";
		cin >> b;
		
		if (b == 0)
			throw (b);
	}
	
	catch(float c)
	{
		cout << "In catch block" << endl;
		cout << "Invalid input" << endl;
		exit(-1);
	}
	
	cout << "Back to main()" << endl;
	cout << "\na/b = " << a/b << endl;
}
