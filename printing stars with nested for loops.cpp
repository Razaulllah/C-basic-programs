/*nested loop ? use for loops to nested another for loop to print the following pattern
*
**
***
**** */ 
#include <iostream>
using namespace std;
int main ()
{
	int i;
	int n;
	cout <<"How many lines you want ?" <<endl;
	cin>>n;
	for (i=1; i<=n; i++){
		
		for (int j=1; j<=i; j++){
			
			cout <<"*";
	}
	cout<<"\n";
	}
}
