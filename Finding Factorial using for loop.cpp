//to find factorial of a number
#include <iostream>
using namespace std;
int  main ()
{
	int j = 1;
	int n;
	cout << "Enter value to find factorial" <<endl;
	cin >> n;
	for (int i=1; i<=n; i++){
		j = i * j;
	
	}
	 cout <<"The factoial of "<<n<< " is " <<j<<endl;	
}

