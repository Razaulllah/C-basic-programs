#include <iostream>

using namespace std;

class A
{
	private:
		int x;
	
	public:
		A ()
		{
			x = 10;
			cout << "value of X before : "<< x <<endl;
		}
		
		void disp()
		{
			cout << "Value of x after is : " << x << endl;
		}
		
	void operator ++ () //perfix increment
	{
		++x;
	}
	
	void operator -- (int) //postfix decremet
	{
		x--;
	}
};

int main ()
{
	A a;
	
	++a;
	a.disp();
	
	a--;
	a.disp();
}
