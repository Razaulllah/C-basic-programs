#include <iostream>

using namespace std;

class time
{
	private:
		int hrs;
		int min;
		int sec;
		
	public:
		friend istream &operator >> (istream &in, time &t)
		{
			in >> t.hrs >> t.min >> t.sec;
			
			return in ;
		}
		
		friend ostream &operator << (ostream &out, time &t)
		{
			out << "Time : "<< t.hrs << " : "<< t.min << " : " << t.sec << endl;
			
			return out;
		}
		
		friend int operator == (time &l, time &r)
		{
			if (l.hrs == r.hrs && l.min == r.min && l.sec == r.sec)
				return 0;
			
			else 
				return 1;
		}
		
		
		
};

int main ()
{
	time a;
	cout << "Enter first time " << endl;
	cin >> a;

	cout << "Time is " << endl;
	cout << a;
	
	
	time b;
	cout << "\nEnter second time " << endl;
	cin >> b;

	cout << "Time is " << endl;
	cout << b;
	
	int c =  a == b;
	cout << "== operator called : "<< c;
}
